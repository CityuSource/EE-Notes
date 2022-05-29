#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

using namespace std;

#define NUMSELLER 	3
#define NUMREFILL 	2
#define REFILLSTOCKS 	10000	
#define LOWSTOCK  	5000

int icecream = 30000;
int refill_cnt = NUMREFILL;

sem_t refill;
sem_t sell;
bool refilling = false;

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void* seller(void *arg)
{
	int id = *(int *)arg;
	int done = 0;  /* 0 - not done; 1 - done */
	long mysell = 0;

	while (!done) {
		sem_wait(&sell);
		pthread_mutex_lock(&mutex);
		if ( icecream > 0 ) {
			for (int i=0; i<100; i++) {} // simulate selling duration
			icecream--;
			mysell++;

			/* TODO-1: signal the vendor to refill the stock */
			if (icecream == LOWSTOCK) {
				if(refill_cnt > 0) {
					refilling = true;
					sem_post(&refill);
				}
			}
		}
		else { /* out of stock */
			if (refill_cnt <= 0)
			 	done = 1;
		}

		if(!refilling)
			sem_post(&sell);

		pthread_mutex_unlock(&mutex);
	}

	pthread_exit((void *) mysell);
}

void *vendor(void *argc)
{
	int done = 0;  /* 0 - not done; 1 - done */

	while (!done) {
		sem_wait(&refill);

		pthread_mutex_lock(&mutex);
		
		icecream += REFILLSTOCKS;
		refill_cnt--;
		if (refill_cnt <= 0)
			done = 1;
		cout << "Vendor restocks icecreams (" << icecream << " icecreams in stock now, " << refill_cnt << " refill left)" << endl;

		refilling = false;
		sem_post(&sell);

		pthread_mutex_unlock(&mutex);
	}

	pthread_exit(NULL);
}

int main(int argc, char *argv[])
{
	pthread_t threads[NUMSELLER], threadv;
	int threadid[NUMSELLER];
	int i, rc;
	long total_sold = 0;
	void *retval;

	sem_init(&refill, 0, 0);
	sem_init(&sell, 0, 1);

	for (i = 0; i < NUMSELLER; i++) {
		threadid[i] = i;
		rc = pthread_create(&threads[i], NULL, seller, (void *)&threadid[i]);
		if (rc) {
			cout << "Error when creating threads!" << endl;
			exit(-1);
		}
	}

	rc = pthread_create(&threadv, NULL, vendor, NULL);
	if (rc) {
		cout << "Error when creating threads!" << endl;
		exit(-1);
	}

	for (i = 0; i < NUMSELLER; i++) {
		rc = pthread_join(threads[i], &retval);
		if (rc) {
			cout << "Error when joining threads!" << endl;
			exit(-1);
		}
		cout << "Seller #" << threadid[i] << " sold " << (long) retval << " icecreams" << endl;
		total_sold += (long) retval;	
	}
	cout << "A total of " << total_sold << " icecreams sold" << endl;

	rc = pthread_join(threadv, NULL);
	if (rc) {
		cout << "Error when joining threads!" << endl;
		exit(-1);
	}

	sem_destroy(&refill);
	sem_destroy(&sell);

	pthread_exit(NULL);
}
