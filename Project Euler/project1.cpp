#include "project1.h"
#include <stdio.h>

project1::project1(void)
{
}


project1::~project1(void)
{
}

void project1::runProject(){
	//start test
	short max = 1000;
	short rval = 0;
	for(int i = 0; i < max; i++){
		if(i % 5 || i % 30)
			rval += i;
	}
	printf("Sum of all multiples: %d\n", rval);
}