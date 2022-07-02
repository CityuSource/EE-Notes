#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <random>

#include <pthread.h>
#include <semaphore.h>
#include <string.h>
#include <unistd.h>

#define BUFFSIZE 600     /* default number of articles: 12 -> 600 */
#define MAXarticle 10000 /* default number of maximum number of articles: 10000*/
#define ALEN 50          /* default number of characters per article: 50 */
#define NumCrawler 3     /* default number of crawlers: 3 */
#define NumClassifier 1  /* default number of classifier: 1 */
#define NumOfClass 13    /* default number of Class: 13 */

using std::cerr;
using std::cout;
using std::endl;
using std::min_element;
using std::ofstream;
using std::remove;
using std::string;
using std::to_string;

template <class Type>
class Queue //Queue by array
{
private:
    Type *array;
    int capacity, front, rear, cursize;

public:
    Queue()
    {
        array = new Type[BUFFSIZE];
        capacity = BUFFSIZE;
        front = cursize = 0;
        rear = -1;
    }

    ~Queue() { delete[] array; }

    void deQueue()
    {
        if (!Empty())
        {
            front = (front + 1) % capacity;
            cursize--;
        }
    }

    void enQueue(const Type &item)
    {
        if (!Full())
        {
            rear = (rear + 1) % capacity;
            array[rear] = item;
            cursize++;
        }
    }

    Type &first() { return array[front]; }

    int size() { return cursize; }

    bool Empty() { return (cursize == 0); }

    bool Full() { return (cursize == BUFFSIZE); }
};

struct thread_data
{
    pthread_t threadID;
    string status;
};
thread_data threadid_status[NumCrawler + NumClassifier];

struct text_data
{
    int key, classlabel;
    string article;
};
text_data *text_table = new text_data[MAXarticle];

void *crawler(void *arg);
void *classifier(void *arg);
char *str_generator(void);
void status_head_output();
void status_output();
void file_output(text_data text_table[]);

Queue<char> buffer;
int classlabelList[NumOfClass + 1] = {0};
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
sem_t buffFull;
unsigned long int interval_A, interval_B;
bool enough = 0, finished = 0;
int key = 1;

int main(int argc, char *argv[])
{
    if (argv[1] && argv[2])
    {
        pthread_t threadCraw[NumCrawler], threadClass[NumClassifier];
        int threadid, threadCreate;
        interval_A = strtoul(argv[1], nullptr, 10);
        interval_B = strtoul(argv[2], nullptr, 10);
        sem_init(&buffFull, 0, 0);
        status_head_output();

        //Creating threads for crawlers
        for (threadid = 0; threadid < NumCrawler; threadid++)
        {
            threadCreate = pthread_create(&threadCraw[threadid], NULL, crawler, (void *)&threadid_status[threadid]);
            if (threadCreate)
            {
                cerr << "Error: failed to creat threads" << endl;
                exit(-1);
            }
        }

        //Creating threads for classifier
        for (threadid = 0; threadid < NumClassifier; threadid++)
        {
            threadCreate = pthread_create(&threadClass[threadid], NULL, classifier, (void *)&threadid_status[NumCrawler + threadid]);
            if (threadCreate)
            {
                cerr << "Error: failed to creat threads" << endl;
                exit(-1);
            }
        }

        //Joining threads for crawler
        for (threadid = 0; threadid < NumCrawler; threadid++)
        {
            threadCreate = pthread_join(threadCraw[threadid], NULL);
            if (threadCreate)
            {
                cerr << "Error: failed to join threads" << endl;
                exit(-1);
            }
        }

        //Joining threads for classifier
        for (threadid = 0; threadid < NumClassifier; threadid++)
        {
            threadCreate = pthread_join(threadClass[threadid], NULL);
            if (threadCreate)
            {
                cerr << "Error: failed to join threads" << endl;
                exit(-1);
            }
        }

        //Releasing memories
        file_output(text_table);
        delete[] text_table;
        sem_destroy(&buffFull);
        pthread_exit(NULL);
    }
    else
    {
        //Missing argument
        cerr << "Argument (interval_A) and (interval_B) are missing!" << endl;
        exit(-1);
    }
}

//Function for crawler
void *crawler(void *arg)
{
    //wait = 1 -> in waiting state, 0 -> not in waiting state
    //grabbed = 1 -> grabbed an article, 0 -> have not grabbed
    bool wait = 0, grabbed = 0;
    auto *data = (struct thread_data *)arg;
    string temp;

    //start – crawler starts
    pthread_mutex_lock(&mutex);
    data->threadID = gettid();
    data->status = "start";
    status_output();
    data->status = (char)NULL;
    pthread_mutex_unlock(&mutex);

    while (!enough || grabbed)
    {
        if (!buffer.Full())
        {
            //s-wait – crawler stops waiting
            if (wait)
            {
                pthread_mutex_lock(&mutex);
                data->status = "s-wait";
                status_output();
                data->status = (char)NULL;
                pthread_mutex_unlock(&mutex);
                wait = 0;
            }

            //grab – crawler starts to grab an article
            if (!grabbed)
            {
                pthread_mutex_lock(&mutex);
                if (buffer.Full())
                    sem_wait(&buffFull); //Wait if buffer is fulled
                else
                {
                    sem_post(&buffFull); //Stop waiting if buffer is not fulled

                    data->status = "grab";
                    status_output();
                    data->status = (char)NULL;

                    temp = str_generator();
                    grabbed = 1;
                }
                pthread_mutex_unlock(&mutex);
            }

            //job
            usleep(interval_A); //Crawler takes time interval_A

            //f-grab – an article has been grabbed and loaded into the buffer
            if (grabbed)
            {
                pthread_mutex_lock(&mutex);
                if (buffer.Full())
                    sem_wait(&buffFull); //Wait if buffer is fulled
                else
                {
                    sem_post(&buffFull); //Stop waiting if buffer is not fulled

                    for (auto subchar : temp)
                        buffer.enQueue(subchar);

                    data->status = "f-grab";
                    status_output();
                    data->status = (char)NULL;
                    grabbed = 0;
                }
                pthread_mutex_unlock(&mutex);
            }
        }
        else
        {
            //wait – crawler starts waiting for available space in the buffer
            if (!wait)
            {
                pthread_mutex_lock(&mutex);
                data->status = "wait";
                status_output();
                data->status = (char)NULL;
                pthread_mutex_unlock(&mutex);
                wait = 1;
            }
        }
    }

    //quit – crawler finished all job and about to quit
    pthread_mutex_lock(&mutex);
    if (wait)
    {
        data->status = "s-wait";
        status_output();
    }
    data->status = "quit";
    status_output();
    data->status = (char)NULL;
    pthread_mutex_unlock(&mutex);

    pthread_exit(NULL);
}

//Function for classifier
void *classifier(void *arg)
{
    auto *data = (struct thread_data *)arg;
    int classlabel_int = -1;

    //start – classifier starts
    pthread_mutex_lock(&mutex);
    data->threadID = gettid();
    data->status = "start";
    status_output();
    data->status = (char)NULL;
    pthread_mutex_unlock(&mutex);

    while (!finished)
    {
        if (!buffer.Empty())
        {
            //clfy – classifier starts to classify an article
            pthread_mutex_lock(&mutex);
            data->status = "clfy";
            status_output();
            data->status = (char)NULL;

            string original;
            for (auto j = 0; j < 50; j++)
            {
                original.push_back(buffer.first());
                buffer.deQueue();
            }
            pthread_mutex_unlock(&mutex);

            //job
            sem_post(&buffFull); //Stop waiting if buffer is not fulled

            string classify(original);
            for (char &subchar : classify)
            {
                if (isupper(subchar))
                    subchar = tolower(subchar);
                else if (!isalpha(subchar))
                    subchar = (char)NULL;
            }

            classify.erase(remove(classify.begin(), classify.end(), (char)NULL), classify.end());
            classlabel_int = ((int)classify[0] - 97) % NumOfClass + 1;
            usleep(interval_B); //Crawler takes time interval_B

            //f-clfy – the article has been classified and deleted from the buffer
            pthread_mutex_lock(&mutex);
            text_table[key] = {key, classlabel_int, original};
            classlabelList[classlabel_int]++;

            data->status = "f-clfy";
            status_output();
            data->status = (char)NULL;
            pthread_mutex_unlock(&mutex);

            //k-enough – k number of articles have been classified
            if (!enough && *min_element(classlabelList + 1, classlabelList + NumOfClass + 1) >= 5)
            {
                pthread_mutex_lock(&mutex);
                enough = 1;
                data->status = to_string(key) + "-enough";
                status_output();
                data->status = (char)NULL;
                pthread_mutex_unlock(&mutex);

                //wait for crawer's f-grab
                if (interval_A > interval_B)
                    usleep(interval_A);
            }

            //n-stored – a total n articles have been stored in the text corpus
            pthread_mutex_lock(&mutex);
            if (buffer.Empty() && enough)
            {
                finished = 1;
                data->status = to_string(key) + "-stored";
                status_output();
                data->status = (char)NULL;
            }
            key++;
            pthread_mutex_unlock(&mutex);
        }
    }

    //quit – classifier finished all job and about to quit
    pthread_mutex_lock(&mutex);
    data->status = "quit";
    status_output();
    data->status = (char)NULL;
    pthread_mutex_unlock(&mutex);

    //! last edit: 20210401
    pthread_mutex_destroy(&mutex);

    pthread_exit(NULL);
}

//Generate random characters
char *str_generator(void)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(48, 122);
    char *art = new char[ALEN + 3];

    for (int i = 0; i < ALEN; ++i)
        art[i] = char(dis(gen));
    art[ALEN] = 0;
    return art;
}

//Output the header of the thread status table
void status_head_output()
{
    for (auto i = 0; i < NumCrawler; i++)
        cout << "Crawler" << i + 1 << "\t";
    for (auto i = 0; i < NumClassifier; i++)
        cout << "Classifier\t";
    cout << endl;
}

//Output the status of the thread
void status_output()
{
    for (auto i = 0; i < NumCrawler + NumClassifier; i++)
        cout << threadid_status[i].status << "\t\t";
    cout << endl;
}

//Output the text corpus to a .txt file
void file_output(text_data text_table[])
{
    ofstream text("text_corpus.txt");
    if (text.is_open())
        for (auto i = 1; i < key; i++)
            text << text_table[i].key << "\t" << text_table[i].classlabel << "\t" << text_table[i].article << endl;
    text.close();
}