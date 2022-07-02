#include <iostream>
#include <pthread.h>
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

using namespace std;

long prog_global = 3;
void *myThreadFun(void *in)
{
    long fun_local = 2;
    ++fun_local;
    ++prog_global;
    cout << "Thread: " << fun_local << " " << prog_global << endl;
    pthread_exit(NULL);
}
int main()
{ // irrelevant variable declarations are removed here
    pid_t pid;
    pthread_t tid;
    cout << endl;

    long main_local = 1;
    pid = fork();
    if (pid != 0)
    {
        wait(NULL);
        pthread_create(&tid, NULL, myThreadFun, NULL);
        pthread_join(tid, NULL);
        ++main_local;
        ++prog_global;
        cout << "Process1: " << main_local << " " << prog_global << endl;
    }
    else
    {
        ++main_local;
        ++prog_global;
        cout << "Process2: " << main_local << " " << prog_global << endl;
    }
    pthread_exit(NULL);
}