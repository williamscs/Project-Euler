#include "project5.h"
#include <vector>
#include <numeric>
#include <cmath>
#include <Windows.h>
#include <WinBase.h>


project5::project5(void)
{
}


project5::~project5(void)
{
}

int project5::findGCD(int a, int b){
	int d = 1;
	int c = -1;
	while(c != 0 || c != 1){
		if(a%2 == 0 && b%2 == 0){
			a /= 2;
			b /= 2;
			d *= 2;
		}
		if(a%2 == 0 && b%2 != 0){
			a /= 2;
		}
		if(a%2 != 0 && b%2 == 0){
			b /= 2;
		}
		if(a%2 != 0 && b%2 != 0){
			if (a == b)
				return a*d;
			c = abs((a-b)/2);
			return d*project5::findGCD((a < b) ? a:b, c);
		}
	}
	return a;
}

int project5::findSmallestMultiple(int min, int max){
	int multiple = 1;

	for(int i = min; i < max; i++){
		multiple /= project5::findGCD(multiple, i);
		multiple *= i;
	}

	return multiple;
}

void project5::runProject(){
	LARGE_INTEGER start, finish, freq, result;
	QueryPerformanceFrequency(&freq);
	QueryPerformanceCounter(&start);
	// Do something

	printf("Smallest Multiple is: %d\n", project5::findSmallestMultiple(1, 20));
	QueryPerformanceCounter(&finish);
	printf("Subtract %lld\n",(finish.QuadPart - start.QuadPart));
	printf("Freq %lld\n",freq.QuadPart/1000000);
	printf("Execution took %lldus", (finish.QuadPart - start.QuadPart) / (freq.QuadPart/1000000));
}
