#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <pthread.h>

using namespace std;

#define NUM_SELLER 	3

static long icecream = 30000;
static pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;

void* seller(void *arg)
{
	int id = *(int *)arg;
 	int s, done = 0;  /* 0 - not done; 1 - done */
	long mysell = 0;

	while (!done) {
		s = pthread_mutex_lock(&mtx);
		if ( icecream > 0 ) {
			for (int i=0; i<100; i++) {}; // simulate selling duration
			icecream--;
			mysell++;
		}
		else
			done = 1;
		s = pthread_mutex_unlock(&mtx);
	}
	pthread_exit((void *) mysell);
}

int main(int argc, char *argv[])
{
	pthread_t threads[NUM_SELLER];
	int threadid[NUM_SELLER];
	int i, rc;
 	long total_sold = 0;
	void *retval;

	for (i = 0; i < NUM_SELLER; i++) {
		threadid[i] = i;
		rc = pthread_create(&threads[i], NULL, seller, (void *)&threadid[i]);
		if (rc) {
			cout << "Error when creating thread!" << endl;
			exit(-1);
		}
	}

	for (i = 0; i < NUM_SELLER; i++) {
		rc = pthread_join(threads[i], &retval);
		if (rc) {
			cout << "Error when joining thread!" << endl;
			exit(-1);
		}
	        cout << "Seller #" << threadid[i] << " sold " << (long) retval << " icecreams" << endl;
		total_sold+=(long) retval;
	}
 	cout << "A total of " << total_sold << " icecreams sold" << endl;
	pthread_exit(NULL);
}
