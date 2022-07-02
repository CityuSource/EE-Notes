// Find the number of prime numbers
// Faster than countprime_3.cpp
// Sieve: keep an array of prime numbers
#include <stdio.h>
#include <time.h>
#include <math.h>

/*
#define N 100
#define SQRT_N 10
#define HALF_SQRT_N 5
*/

/*
#define N 100000
#define SQRT_N 316
#define HALF_SQRT_N 158
*/

#define N 1000000
#define SQRT_N 1000
#define HALF_SQRT_N 500

long p[HALF_SQRT_N];
long count;

char isprime(long n)
{
long i;

	if (n<4) return 1;
	if ((n&1) == 0) return 0; //even

	i=0;
	while(i < count) {
		if(n%(p[i]) == 0) return 0;
		i++;
	}
	if((n-3)/2 < HALF_SQRT_N) p[count++] = n;
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

	count = 0;
	p[count++] = 3; // 3 is prime
	for(i=1; i<HALF_SQRT_N; i++) p[i] = 0;

	j=2; // 2, 3 are prime numbers
	for(i=5; i<N; i+=2)
		if(isprime(i)) j++;
	v = clock();
	printf("Result: %ld\n",j);
	printf("Time Elapsed: %.2f sec\n", (float) (v-u)/CLOCKS_PER_SEC);

	return 0;
}
