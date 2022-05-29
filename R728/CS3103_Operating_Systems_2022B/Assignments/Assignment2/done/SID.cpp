/* ---------------------- Program: Video Binary uantization with Multi-threading ---------------------- */
#include <iostream>
#include <cstdlib>
#include <vector>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <pthread.h>
#include "cache.h"
#include "generate_frame_vector.cpp"
using namespace std;
/* ----------------------------- Strucures Uesed ---------------------------- */
struct frames // Just to simplify passing around queues that store array with pointers
{
    double *arr;
};
/* ---------------------------- Global Variables ---------------------------- */
int interval = 1;                       // just some initializations
int length = 4, quantizecheckcount = 3; // variables you can customize for the program
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
cache<frames> qframes;
/* -------------------------- Function Used ------------------------- */
double *generate_frame_vector(int length);           // from generate_frame_vector.cpp
void print_frame_vector(double *frames, int length); // from generate_frame_vector.cpp
void *camera_thread(int interval);
void *quantizer_thread(void *args);
void quantize(double *arr); // Function to call to quantize a frame
void init();
/* -------------------------- Function Definitions -------------------------- */
void *camera_thread(void *args)
{
    while (double *tempf = generate_frame_vector(length))
    { // Check if its full
        if (qframes.full())
            usleep(interval * 1000000); // sleep interval*1s

        if (!qframes.full()) // Check again after sleeping
        {
            frames tempv;
            tempv.arr = tempf;
            pthread_mutex_lock(&mutex); // Lock the cache to write the frame, when frame generation is done
            qframes.push(tempv);
            pthread_mutex_unlock(&mutex);
        }
    }
}

void quantize() // Quantizing function
{
    for (int i = 0; i < length; i++)
    {
        double temp = qframes.top().arr[i];

        if (temp <= 0.5) // Directly modify the values in the cache
            qframes.top().arr[i] = 0;
        else
            qframes.top().arr[i] = 1;
    }

    print_frame_vector(qframes.top().arr, length);
    qframes.pop(); // Delete the finished frame from the cache
}

void *quantizer_thread(void *args)
{
    bool over = false; // Responsible for ending the thread
    int count = 1;
    while (!over)
    {
        if (qframes.empty()) // Check if the cache is empty
        {
            usleep(interval * 100000);       // sleep interval*100ms
            if (count == quantizecheckcount) // Attempt to check 3 times
                over = true;
            else
                count++;
        }
        else
        {                               // Begin processing if it isn't empty
            pthread_mutex_lock(&mutex); // Lock the cache for quantizing
            quantize();
            pthread_mutex_unlock(&mutex);
            usleep(3000000); // Simulate processing by waiting for 3 seconds
        }
    }
}

void init()
{
    pthread_t thread1, thread2, thread3;
    int cthread, qthread1, qthread2;
    cthread = pthread_create(&thread1, NULL, camera_thread, NULL);     // Create the threads here
    qthread1 = pthread_create(&thread2, NULL, quantizer_thread, NULL); // Two quantizer threads are intialized here to speedup processing
    qthread2 = pthread_create(&thread3, NULL, quantizer_thread, NULL);
    pthread_join(thread1, NULL); // Wait for the threads to finish and join
    pthread_join(thread2, NULL); // Without joining, the threads will shutdown unexpectedly
    pthread_join(thread3, NULL);
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