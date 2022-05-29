#include <cstdlib>
#include <iostream>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

using namespace std;

#define NUM_SELLER 6

static long icecream = 30000;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *seller(void *arg)
{
	//int id = *(int *)arg;
	int done = 0; /* 0 - not done; 1 - done */
	long mysell = 0;

	while (!done)
	{
		pthread_mutex_lock(&mutex); //lock

		if (icecream > 0)
		{
			for (int i = 0; i < 100; i++)
				; // simulate selling duration
			icecream--;
			mysell++;
			// cout << gettid() << " ";
		}
		else
			done = 1;

		pthread_mutex_unlock(&mutex); //unlock
	}
	pthread_exit((void *)mysell);
}

int main(int argc, char *argv[])
{
	pthread_t threads[NUM_SELLER];
	int threadid[NUM_SELLER];
	int i, rc;
	long total_sold = 0;
	void *retval;

	for (i = 0; i < NUM_SELLER; i++)
	{
		threadid[i] = i;
		rc = pthread_create(&threads[i], NULL, seller, (void *)&threadid[i]);
		if (rc)
		{
			cout << "Error when creating thread!" << endl;
			exit(-1);
		}
	}

	for (i = 0; i < NUM_SELLER; i++)
	{
		rc = pthread_join(threads[i], &retval);
		if (rc)
		{
			cout << "Error when joining thread!" << endl;
			exit(-1);
		}
		cout << "Seller #" << threadid[i] << " sold " << (long)retval << " ice-creams" << endl;
		total_sold += (long)retval;
	}

	cout << "A total of " << total_sold << " ice-creams sold" << endl;
	pthread_exit(NULL);
}
