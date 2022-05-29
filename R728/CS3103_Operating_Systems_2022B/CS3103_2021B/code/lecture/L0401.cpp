#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <sys/wait.h>
#include <pthread.h>

using namespace std;

int x = 10;

void *worker_routine(void *arg)
{
    cout << "(1) x = " << x << " in worker thread" << endl;

    cout << "(2) x = " << x << " in worker thread" << endl;

    x = x + 5;

    cout << "(3) x = " << x << " in worker thread" << endl;

    cout << "(4) x = " << x << " in worker thread" << endl;

    pthread_exit(NULL);
}

int main()
{
    pthread_t thread;
    int rc;

    rc = pthread_create(&thread, NULL, worker_routine, NULL);

    cout << "(1) x = " << x << " in master thread" << endl;

    rc = pthread_join(thread, NULL);

    cout << "(4) x = " << x << " in master thread" << endl;

    pthread_exit(NULL);
}