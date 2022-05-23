#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int x = 10;

int main(void)
{
    int pid;
    pid = fork(); /* create a new process */
    cout << "(1) x = " << x << " in " << getpid() << endl;
    if (pid == 0)
    {
        cout << "(2) x = " << x << " in " << getpid() << endl;
        x = x + 5;
        cout << "(3) x = " << x << " in " << getpid() << endl;
    }
    else
        wait(NULL);
    cout << "(4) x = " << x << " in " << getpid() << endl;
}