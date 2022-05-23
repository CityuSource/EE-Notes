#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int input;
	int counter=0;
	int i;
	input=atoi(argv[1]);	
	for (i=0; i<input; ++i)
	{
		printf("Child Process %d: counter=%d\n", getpid(), ++counter);
		sleep(1); // count slowly
	}
}		
