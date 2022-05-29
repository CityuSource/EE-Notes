#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
#include <random>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

#define NUM_CRAWLER 3
#define BUFFER_SIZE 12
static const int ALEN = 50;

class Queue
{
public:
    int head, tail;
    char **arr;
    int size, maxsize;
    pthread_mutex_t mutexTail = PTHREAD_MUTEX_INITIALIZER;
    Queue(int k)
    {
        arr = new char *[k];
        maxsize = k;
        head = tail = size = 0;
    }

    void enQueue(char *article)
    {
        int tmp_tail;
        pthread_mutex_lock(&mutexTail);
        tmp_tail=tail;
        tail = (tail + 1) % maxsize;
        pthread_mutex_unlock(&mutexTail);
        arr[tmp_tail] = article;
    }

    void deQueue()
    {
        head = (head + 1) % maxsize;
    }

    char *Front()
    {
        char *p = arr[head];
        return p;
    }
};
int key = 0;
int Threshold;
int categories[13] = {0};
int interval_A, interval_B, interval_C;
bool finishFlag = false;
ofstream fout;
// emptyBuffer: serve as empty check for buffer
// fullBuffer: serve as full check for buffer
// classifier send stopSignal to stop crawlers
sem_t emptyBuffer, fullBuffer, stopSignal;
sem_t update[NUM_CRAWLER];
sem_t lived[NUM_CRAWLER];
sem_t z[NUM_CRAWLER];
// mutex is used to create mutual exclusion
pthread_mutex_t mutexScreen = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutexArticle = PTHREAD_MUTEX_INITIALIZER;
Queue *buffer = new Queue(BUFFER_SIZE);
//generate the string for classify

char *str_generator(void);

//check whether the article is enough
bool isFinish()
{
    for (int i = 0; i < 13; i++)
    {
        if (categories[i] < 5)
            return 0;
    }
    return 1;
}

//do test conversion
void preprocess(char *orig)
{
    int i = 0, j = 0;
    char *update = new char[50];
    while (orig[i] != '\0')
    {
        if (orig[i] <= 'z' && orig[i] >= 'a')
        {
            update[j] = orig[i];
            j++;
        }
        else if (orig[i] <= 'Z' && orig[i] >= 'A')
        {
            update[j] = orig[i] - 'A' + 'a';
            j++;
        }
        i++;
    }
    update[j] = '\0';
    for (int k = 0; k <= j; k++)
    {
        orig[k] = update[k];
    }
}

void output(int id, string str)
{
    string outputs[5] = {"", "", "", "", ""};
    outputs[id] = str;
    pthread_mutex_lock(&mutexScreen);
    printf("%8s%5s%8s%5s%8s%5s%8s%5s%8s\n", outputs[0].c_str(), "", outputs[1].c_str(), "", outputs[2].c_str(), "", outputs[3].c_str(), "", outputs[4].c_str());
    pthread_mutex_unlock(&mutexScreen);
}

void *crawler(void *arg)
{
    int id = *(int *)arg;
    int val_fullB = 0, val_stopS = 0, val_rest = 0;
    int num = 0;
    output(id, "start");

    while (!val_stopS)
    {

        if (num == Threshold)
        {
            output(id, "rest");
            sem_post(&update[id]);
            sem_wait(&z[id]);
            output(id, "s-rest");
            num = 0;
        }
        sem_getvalue(&stopSignal, &val_stopS);
        if (val_stopS)
        {
            break;
        }
        output(id, "grab");

        char *art = str_generator();
        usleep(interval_A);
        //judge whether is full
        sem_getvalue(&fullBuffer, &val_fullB);
        if (val_fullB == 0)
        {

            output(id, "wait");

            sem_wait(&fullBuffer);
            //if receive the stopSignal, leave the loop
            sem_getvalue(&stopSignal, &val_stopS);
            if (val_stopS)
            {
                break;
            }

            output(id, "s_wait");
        }
        else{
            sem_wait(&fullBuffer);
        }
        //save the article
        buffer->enQueue(art);
        sem_post(&emptyBuffer);

        output(id, "f_grab");

        //if receive the stopSignal, leave the loop
        num++;
        sem_getvalue(&stopSignal, &val_stopS);
    }
    sem_post(&lived[id]);

    output(id, "quit");

    pthread_exit(NULL);
}

void *controller(void *arg)
{
    int id = 4;

    output(id, "start");

    int val = 0;
    int val_live[NUM_CRAWLER] = {0};
    bool flag = true;
    while (true)
    {
        usleep(interval_C);
        for (int i = 0; i < NUM_CRAWLER; i++)
        {
            sem_getvalue(&update[i], &val);
            if (val == 1)
            {

                output(id, "get-crx");

                sem_wait(&update[i]);
                output(id, "up-crx");
                sem_post(&z[i]);
            }
        }
        for (int i = 0; i < NUM_CRAWLER; i++)
        {
            sem_getvalue(&lived[i], &val_live[i]);
            flag = flag && val_live[i];
        }
        if (flag)
        {
            break;
        }
        flag = true;
    }
    output(id, "quit");
    pthread_exit(NULL);
}

void *classifier(void *arg)
{
    int id = 3;

    output(id, "start");

    int val_EmptyB = 0;
    while (true)
    {
        sem_getvalue(&emptyBuffer, &val_EmptyB);
        if (finishFlag && !val_EmptyB)
        {
            char c_str[50];
            string str;
            sprintf(c_str, "%d_stored", key);
            str = c_str;
            output(id, str);
            output(id, "quit");
            break;
        }
        sem_wait(&emptyBuffer);
        char *art = buffer->Front();
        //preprocess
        char copy[50];
        strcpy(copy, art);
        preprocess(copy);
        usleep(interval_B);
        output(id, "clf");

        int label = int(copy[0] - 'a') % 13 + 1;

        output(id, "f_clf");

        //preprocess end
        buffer->deQueue();
        sem_post(&fullBuffer);
        key += 1;
        fout << key << " " << label << " " << art << endl;
        categories[label - 1]++;
        if (!finishFlag && isFinish())
        {
            char c_str[50];
            string str;
            sprintf(c_str, "%d_enough", key);
            str = c_str;

            output(id, str);

            sem_post(&stopSignal);
            finishFlag = true;
        }
    }
    pthread_exit(NULL);
}

int main(int argc, char **argv)
{
    interval_A = atoi(argv[1]);
    interval_B = atoi(argv[2]);
    interval_C = atoi(argv[3]);
    Threshold = atoi(argv[4]);

    fout.open("corpus.txt");
    pthread_t threads[NUM_CRAWLER];
    pthread_t threadclf = 3; //3 is just the id assign to classifier
    pthread_t threadctl = 4;
    sem_init(&emptyBuffer, 0, 0);
    sem_init(&fullBuffer, 0, BUFFER_SIZE);
    sem_init(&stopSignal, 0, 0);
    for (int i = 0; i < NUM_CRAWLER; i++)
    {
        sem_init(&update[i], 0, 0);
        sem_init(&lived[i], 0, 0);
        sem_init(&z[i], 0, 0);
    }
    int threadid[NUM_CRAWLER];
    int i, rc;

    printf("%8s%5s%8s%5s%8s%5s%8s%5s%8s\n", "crawler1", "", "crawler2", "", "crawler3", "", "classifier", "", "controller");
    //create thread crawler
    for (i = 0; i < NUM_CRAWLER; i++)
    {
        threadid[i] = i;
        rc = pthread_create(&threads[i], NULL, crawler, (void *)&threadid[i]);
        if (rc)
        {
            cout << "Error when creating thread!" << endl;
            exit(-1);
        }
    }

    //create thread classifier
    rc = pthread_create(&threadclf, NULL, classifier, NULL);
    if (rc)
    {
        cout << "Error when creating thread!" << endl;
        exit(-1);
    }

    //create thread controller
    rc = pthread_create(&threadctl, NULL, controller, NULL);
    if (rc)
    {
        cout << "Error when creating thread!" << endl;
        exit(-1);
    }

    //join crawlers
    for (i = 0; i < NUM_CRAWLER; i++)
    {
        rc = pthread_join(threads[i], NULL);
        if (rc)
        {
            cout << "Error when joining thread!" << endl;
            exit(-1);
        }
    }

    //join classifier
    rc = pthread_join(threadclf, NULL);
    if (rc)
    {
        cout << "Error when joining thread!" << endl;
        exit(-1);
    }
    //join controller
    rc = pthread_join(threadctl, NULL);
    if (rc)
    {
        cout << "Error when joining thread!" << endl;
        exit(-1);
    }
    sem_destroy(&emptyBuffer);
    sem_destroy(&fullBuffer);
    sem_destroy(&stopSignal);
    for (int i = 0; i < NUM_CRAWLER; i++)
    {
        sem_destroy(&update[i]);
    }

    pthread_mutex_destroy(&mutexScreen);
    pthread_mutex_destroy(&mutexArticle);

    fout.close();
    pthread_exit(NULL);
}
