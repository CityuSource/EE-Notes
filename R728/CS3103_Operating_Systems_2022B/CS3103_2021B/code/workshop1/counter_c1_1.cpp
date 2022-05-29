#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
	int input;
	int counter=0;
	int status=0;
	int i;

	pid_t pid;
	cout << "--- Process " << getpid() << " is running" << endl;
	cout << "Enter a number: ";
	cin >> input;

	pid = fork();

	if (pid > 0)
	{ // parent process
		pid = wait(&status);
		cout << "--- End of Parent Process " << getpid() << endl;
	}
	else if (pid == 0)
	{ // child process
		cout << "Child Process " << getpid() << " is running" << endl;

		if (input <= 0) {
			if (execvp(argv[1], argv) < 0) {
			cout << "execvp () failed!" << endl;
			}
		}
		else {
			for (i = 0; i < input; ++i)
			{
			printf("Child Process %d: counter=%d\n", getpid(), ++counter);
			sleep(1);  // count slowly
			}
		}
		
	}
	else
	{ // fork failed
		cout << "fork () failed!" << endl;
		exit (EXIT_FAILURE);
	}
	exit (EXIT_SUCCESS);
}		
