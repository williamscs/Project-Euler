#include "project7.h"
#include <stdio.h>
#include <cmath>

project7::project7(void)
{
}


project7::~project7(void)
{
}
std::vector<bool> project7::sieve_of_eratosthenes(unsigned cap){
	std::vector<bool> arr(cap);
	for(unsigned i = 0; i < cap; i++){
		arr[i] = true;
	}
	unsigned prime = 2;
	for(unsigned i = 2; i < cap; i++){
		if(arr[i] == true){
			for(long unsigned j = i*i; j < cap; j = j + i){
				arr[j] = false;
			}
		}
	}
	return arr;
}

unsigned project7::find_cap(unsigned n){
	return 2*n*logl(n);
}

unsigned project7::find_nth_prime(unsigned n){
	unsigned cap = project7::find_cap(n);
	std::vector<bool> arr = project7::sieve_of_eratosthenes(cap);
	unsigned count = 0;
	unsigned i = 0;
	for(i = 2; count < n; i++){
		if(arr[i] == true)
			count++;
	}
	return --i;
}

void project7::runProject(){
	unsigned n = 8138;

	printf("Result is: %u", project7::find_nth_prime(n));
}
