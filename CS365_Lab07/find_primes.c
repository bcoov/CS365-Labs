#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <pthread.h>
#include "is_prime.h"

typedef struct {
	int capacity, num_found;
	int *data;

	// TODO: add a mutex for synchronization
} PrimeList ;

// Create a PrimeList with enough capacity to store given
// number of primes.
PrimeList *primelist_alloc(int capacity)
{
	PrimeList *list = malloc(sizeof(PrimeList));
	list->capacity = capacity;
	list->num_found = 0;
	list->data = malloc(capacity * sizeof(int));

	// TODO: initialize the mutex

	return list;
}

// Use this function to add a prime to the PrimeList.
// This function must be thread-safe!
// Use the PrimeList's mutex to guard the critical section
// (the code that will access the PrimeList's fields).
void primelist_append(PrimeList *list, int prime)
{
	// TODO
}

int main(void)
{
	int min, max;
	int num_threads;

	printf("Min: ");
	scanf("%i", &min);
	printf("Max: ");
	scanf("%i", &max);
	printf("Number of threads: ");
	scanf("%i", &num_threads);

	int est_num_primes = (int) ((max / log(max)) * 1.4);
	printf("Estimated number of primes is %i\n", est_num_primes);

	// Use this data structure to store all of the primes discovered
	PrimeList *list = primelist_alloc(est_num_primes);

	// TODO: use threads to find all primes in range, add them to the PrimeList

	// TODO: print out all primes found in range (once all threads have completed)

	return 0;
}