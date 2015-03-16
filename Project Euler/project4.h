#pragma once
#include <string>
class project4
{
public:
	project4(void);
	~project4(void);
	template <class T>
	static int numDigits(T);
	static bool isPalindrome(long unsigned);
	static long unsigned getLargestPalindrome(int);
	static void runProject();
};

