#include "project2.h"
#include <stdio.h>


project2::project2(void)
{
}


project2::~project2(void)
{
}

void project2::runProject(){
	unsigned MAX = 4000000;
	unsigned cur = 2;
	unsigned prev = 1;
	unsigned rval = 2;
	while(cur < MAX){
		unsigned tmp = cur;
		cur += prev;
		prev = tmp;
		if((cur % 2) == 0)
			rval += cur;
	}
	printf("Sum of even fibonacci numbers less than %d is: %d", MAX, rval);
}
