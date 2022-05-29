
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char **argv)
{
	char input[3];
	int status=0;
	pid_t pid;

	char child[] = "./counting";
	// the arguments are used for running the program in the child process
	char* arg_array[] = {child, NULL, NULL};
	
	printf ("--- Process %d is running\n", getpid());
	printf ("Enter a number: ");
	scanf ("%s", input);

	arg_array[1]=input;

	pid = fork();
	if (pid > 0) // parent process: after child process finishes, the parent process continues
	{ 
		pid = wait(&status);
		printf("--- End of Parent Process %d\n", getpid());
	}
	else if (pid == 0) // child process
	{  
		if(execvp(arg_array[0], arg_array )<0) //execute the program called "counting"
			printf("execvp is failed for process. \n");   
	}
	else // fork failed
	{ 
		printf("fork is failed!\n");
		exit (EXIT_FAILURE);
	}
	exit (EXIT_SUCCESS);
}		
