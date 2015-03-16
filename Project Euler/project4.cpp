#include "project4.h"
#include <sstream>

project4::project4(void)
{
}



project4::~project4(void)
{
}


bool project4::isPalindrome(long unsigned number){
	bool isPal = false;
	std::string rval = static_cast<std::stringstream*>( &(std::stringstream() << number) )->str();
	int length = rval.size();
	int half_length = (length % 2) == 0?length/2:(length/2)+1;
	//printf("Half length is %d", half_length);
	for(int i = 0; i < half_length; i++ ){
		isPal = rval[i] == rval[length-1-i];
		//printf("%c == %c is %s", rval[i], rval[length-1-i], isPal ? "true" : "false");
		if( isPal == false )
			break;
	}

	return isPal;
}

long unsigned project4::getLargestPalindrome(int max){
	long unsigned rval = 0;
	for(int i = max; i >= 100; i--){
		for(int j = max; j >= i; j--){
			if(i*j < rval)
				break;
			long unsigned result = i * j;
			if(project4::isPalindrome(result)){
				rval = (result > rval) ? result: rval;
			}
		}
	}
	return rval;
}

void project4::runProject(){
	int number = 999;
	printf("Largest palindrome is: %lu", project4::getLargestPalindrome(number));
}
