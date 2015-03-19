#include "project7.h"
#include <stdio.h>
#include <cmath>
#include <fstream>

project7::project7(void)
{
}


project7::~project7(void)
{
}
std::vector<bool> project7::sieve_of_eratosthenes(float float_cap){
	unsigned cap = (unsigned)float_cap + 0.5;
	std::vector<bool> arr((unsigned)cap);
	for(unsigned i = 0; i < cap; i++){
		arr[i] = true;
	}
	
	for(unsigned long long i = 2; i < cap; i++){
		if(arr[i] == true){
			for(unsigned long long j = i*i; j < cap; j = j + i){
				arr[j] = false;
			}
		}
	}
	return arr;
}

float project7::find_cap(unsigned n){
	return 2*n*(float)log(n);
}

unsigned project7::find_nth_prime(unsigned n){
	float cap = project7::find_cap(n);
	std::vector<bool> arr = project7::sieve_of_eratosthenes(cap);
	unsigned count = 0;
	unsigned i = 0;
	for(i = 2; count < n; i++){
		if (arr[i] == true){
			count++;
		}
	}
	return --i;
}

void project7::runProject(){
	unsigned n = 10001;

	printf("Result is: %u", project7::find_nth_prime(n));
}
