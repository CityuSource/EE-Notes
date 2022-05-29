/* ---------------------- Program: Video Binary uantization with Multi-threading ---------------------- */
#include <iostream>
#include <cstdlib>
#include <vector>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>
#include <math.h>
#include "cache.h"
#include "generate_frame_vector.cpp"
#include "compression.cpp"
using namespace std;
/* ----------------------------- Structures Uesed ---------------------------- */
struct frames // Just to simplify passing around queues that store array with pointers
{
    double *arr;
    int order;
};
/* ---------------------------- Global Variables ---------------------------- */
int interval = 1, over = 0;             // just some initializations
int length = 4, quantizecheckcount = 3; // variables you can customize for the program
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
cache<frames> qframes;
cache<frames> temp_cache(1);
/* -------------------------- Semaphores to be used ------------------------- */
sem_t cache_ts, cache_s, transform_s, estimator_s;
/* -------------------------- Function Used ------------------------- */
double *generate_frame_vector(int length);           // from generate_frame_vector.cpp
void print_frame_vector(double *frames, int length); // from generate_frame_vector.cpp
void *camera_thread(void *args);
void *estimator_thread(void *args);
void *transformer_thread(void *args);
void init();
/* -------------------------- Function Definitions -------------------------- */
void *transformer_thread(void *args)
{
    int start = 1;
    while (!qframes.empty() || start--)
    {
        sem_wait(&transform_s);
        if (qframes.empty()) // safety check and also acts as a trigger to quit thread
            break;

        frames tempt = {(double *)malloc(length * sizeof(double)), qframes.top().order};
        copy(qframes.top().arr, qframes.top().arr + length, tempt.arr);
        tempt.arr = compression(tempt.arr, length);

        temp_cache.push(tempt);
        usleep(3 * 1000000); // emulate 3 seconds of processing time
        sem_post(&cache_ts);
        sem_post(&estimator_s);
    }
}

void *estimator_thread(void *args)
{
    int start = 1;
    while (!qframes.empty() || start--)
    {
        sem_wait(&estimator_s); // get the signal from transformer

        sem_wait(&cache_ts);
        frames tempe = {(double *)malloc(length * sizeof(double)), temp_cache.top().order}; // extract the frames from the temporary cache and normal cache
        copy(temp_cache.top().arr, temp_cache.top().arr + length, tempe.arr);
        frames original{(double *)malloc(length * sizeof(double)), qframes.top().order};
        copy(qframes.top().arr, qframes.top().arr + length, original.arr);

        double mse = 0;
        for (int i = 0; i < length; i++)
            mse += pow(tempe.arr[i] - original.arr[i], 2);

        mse /= length;
        printf("mse = %lf\n", mse);
        qframes.pop();
        temp_cache.pop();
        sem_post(&cache_s);
    }
    sem_post(&transform_s); // signal transformer thread to run again and stop if there isn't anything
}

void *camera_thread(void *args)
{
    int count = 0;
    while (double *tempf = generate_frame_vector(length)) // generate until null is received
    {
        if (qframes.full())     // Check if its full
            sem_wait(&cache_s); // wait for estimator's signal

        if (!qframes.full()) // once estimator signal is done qframes will have space but in initialization scenario, this is needed to prevent overflow
        {
            count++;
            frames tempv;
            tempv.arr = (double *)malloc(length * sizeof(double)), tempv.order = count;
            copy(tempf, tempf + length, tempv.arr);
            pthread_mutex_lock(&mutex); // Lock the cache to write the frame, when frame generation is done
            usleep(interval * 1000000); // sleep interval*1s
            qframes.push(tempv);
            pthread_mutex_unlock(&mutex);
            sem_post(&transform_s);
        }
    }
}

void init()
{
    pthread_t thread1, thread2, thread3;
    int cthread, ethread1, tthread1;
    sem_init(&cache_s, 0, 0);
    sem_init(&estimator_s, 0, 0);
    sem_init(&transform_s, 0, 0);
    sem_init(&cache_ts, 0, 0);
    cthread = pthread_create(&thread1, NULL, camera_thread, NULL); // Create the threads here
    tthread1 = pthread_create(&thread2, NULL, transformer_thread, NULL);
    ethread1 = pthread_create(&thread3, NULL, estimator_thread, NULL);
    pthread_join(thread1, NULL); // Wait for the threads to finish and join
    pthread_join(thread2, NULL); // Without joining, the threads will shutdown unexpectedly
    pthread_join(thread3, NULL);
    sem_destroy(&cache_s);
    sem_destroy(&estimator_s);
    sem_destroy(&transform_s);
    sem_destroy(&cache_ts);
}

int main(int argc, char *argv[])
{
    if (argc == 1)
        init();
    else if (argc >= 2)
    {
        interval = stoi(argv[1]);
        init();
    }
}