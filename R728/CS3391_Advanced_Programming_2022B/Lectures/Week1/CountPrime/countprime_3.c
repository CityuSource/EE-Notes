// Find the number of prime numbers
// Faster than countprime_2.cpp
// Square : check the factor candidates up to the square root of the testing
//          number
#include <stdio.h>
#include <time.h>
#include <math.h>

#define N 1000000

char isprime(long n)
{
	long i,j;
        if (n<4) return 1;
	if ((n&1) == 0) return 0; //even
	j = (long) sqrt((double) n);
	for (i=3;i<=j;i+=2)
		if (n%i == 0) return 0;
	return 1;
}

int main()
{
long i,j;
long u,v;

	i = N;
	printf("Find the number of prime numbers less than %ld\n",i);
	printf("Please wait...\n");

	u = clock();
	j=0;
	for(i=2; i<N; i++)
		if(isprime(i)) j++;
	v = clock();
	printf("Result: %ld\n",j);
	printf("Time Elapsed: %.2f sec\n", (float) (v-u)/CLOCKS_PER_SEC);

	return 0;
}
