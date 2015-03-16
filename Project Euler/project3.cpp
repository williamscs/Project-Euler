#include "project3.h"
#include <stdio.h>

#define LIMIT 10000000 /*size of integers array*/
using namespace std;

vector<int> project3::getPrimeFactors(long long unsigned n){
	vector<int> v;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
		int two = 2;
		v.push_back(two);
        n = n/2;
    }
	double sqrtNum = sqrt(static_cast<double>(n/2));
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrtNum; i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
			v.push_back(i);
            n = n/i;
        }
    }
	return v;
}

project3::project3(void)
{
}


project3::~project3(void)
{
}

void project3::runProject(){
	long long unsigned number = 600851475143;
	std::vector<int> primes = project3::getPrimeFactors(number);
	int result = primes.back();
	printf("Largest Prime Factor of %llu is: %d\n",  number, result);
}