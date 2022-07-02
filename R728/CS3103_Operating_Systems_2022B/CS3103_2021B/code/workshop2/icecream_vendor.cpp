#include <cstdlib>
#include <iostream>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

using namespace std;

#define NUMSELLER 3 //num of sellers
#define NUMREFILL 2 //refill times
#define REFILLSTOCKS 10000
#define LOWSTOCK 5000

int icecream = 30000;
int refill_cnt = NUMREFILL;

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
sem_t refill; //!

void *seller(void *arg)
{
    //int id = *(int *)arg;
    int done = 0; /* 0 - not done; 1 - done */
    long mysell = 0;

    while (!done)
    {

        pthread_mutex_lock(&mutex);

        if (icecream > 0)
        {
            for (int i = 0; i < 100; i++)
            {
            }; // simulate selling duration
            icecream--;
            mysell++;

            if (icecream == LOWSTOCK)
                sem_post(&refill); //!
        }
        else
        { /* out of stock */
            if (refill_cnt <= 0)
                done = 1;
        }
        pthread_mutex_unlock(&mutex);
    }
    pthread_exit((void *)mysell);
}

void *vendor(void *argc)
{
    int done = 0; /* 0 - not done; 1 - done */

    while (!done)
    {
        sem_wait(&refill); //!
        pthread_mutex_lock(&mutex);

        icecream += REFILLSTOCKS;
        refill_cnt--;
        if (refill_cnt <= 0)
            done = 1;
        cout << "Vendor restocks icecreams (" << icecream << " icecreams in stock now, " << refill_cnt << " refill left)" << endl;
        pthread_mutex_unlock(&mutex);
    }
    pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
    pthread_t threads[NUMSELLER], threadv;
    int threadid_list[NUMSELLER];
    int i, rc;
    long total_sold = 0;
    void *retval;

    sem_init(&refill, 0, 0); //!

    for (i = 0; i < NUMSELLER; i++)
    {
        threadid_list[i] = i;
        rc = pthread_create(&threads[i], NULL, seller, (void *)&threadid_list[i]);
        if (rc)
        {
            cout << "Error when creating threads!" << endl;
            exit(-1);
        }
    }

    rc = pthread_create(&threadv, NULL, vendor, NULL);
    if (rc)
    {
        cout << "Error when creating threads!" << endl;
        exit(-1);
    }

    for (i = 0; i < NUMSELLER; i++)
    {
        rc = pthread_join(threads[i], &retval);
        if (rc)
        {
            cout << "Error when joining threads!" << endl;
            exit(-1);
        }
        cout << "Seller #" << threadid_list[i] << " sold " << (long)retval << " icecreams" << endl;
        total_sold += (long)retval;
    }
    cout << "A total of " << total_sold << " icecreams sold" << endl;

    rc = pthread_join(threadv, NULL);
    if (rc)
    {
        cout << "Error when joining threads!" << endl;
        exit(-1);
    }

    sem_destroy(&refill); //!
    pthread_exit(NULL);
}