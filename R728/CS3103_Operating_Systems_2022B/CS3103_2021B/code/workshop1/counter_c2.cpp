#include <iostream>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

using namespace std;
pid_t pid;

void signal_handler(int sig)
{
	if (pid !=0) {
		//Kill child only
		kill(pid, SIGTERM);
		cout << " Signal detected, Child Process "<< pid << " ends with SIGNAL " << sig << endl;
	}
}

int main(int argc, char **argv)
{
	signal(SIGINT, signal_handler);
	
	for (;;) {
		int input;
		int counter=0;
		int status=0;
		int i;

		cout << "--- Process " << getpid() << " is running" << endl;
		cout << "Enter a number: ";
		cin >> input;

		pid = fork();

		if (pid > 0)
		{ // parent process
			//Detected signal -- SIGINT
			//signal(SIGINT, signal_handler);

			//pid = wait(&status);
			//pid = waitpid(-1, &status, WNOHANG | WUNTRACED);
			while ((waitpid(-1, &status, WNOHANG | WUNTRACED)) > 0) {
				cout << "Parent do sth" << endl;
				cout << "--- End of Parent Process " << getpid() << endl;
			}
			

		}
		else if (pid == 0)
		{ // child process
			cout << "Child Process " << getpid() << " is running from Parent " << getppid() << endl;

			for (i = 0; i < input; ++i)
			{
				printf("Child Process %d: counter=%d\n", getpid(), ++counter);
				sleep(1);  // count slowly.
			}
			kill(pid,SIGINT);
			exit (EXIT_SUCCESS);
		}
		else
		{ // fork failed
			cout << "fork () failed!" << endl;
			exit (EXIT_FAILURE);
		}
	}
	exit (EXIT_SUCCESS);
}		
