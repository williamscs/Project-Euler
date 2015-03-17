#include "project6.h"
#include <stdio.h>
#include <cmath>


project6::project6(void)
{
}


project6::~project6(void)
{
}

long long unsigned project6::sum_of_squares(long long unsigned x){
	printf("sum_of_squares is: %llu\n", (x * (x + 1) * (2*x + 1))/6);
	return (x * (x + 1) * (2*x + 1))/6;
}

long long unsigned project6::square_of_sum(long long unsigned x){
	long long unsigned rval = (x * (x + 1)) / 2;
	printf("square_of_sum is: %llu\n", rval * rval);
	return rval * rval;
}
void project6::runProject(){
	long long unsigned value = 100;
	long long unsigned square = project6::square_of_sum(value);
	long long unsigned sum = project6::sum_of_squares(value);
	long long unsigned result = square - sum;

	printf("Result is: %llu\n", result);
}
