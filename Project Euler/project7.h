#pragma once
#include <vector>
class project7
{
public:
	project7(void);
	~project7(void);
	static std::vector<bool> sieve_of_eratosthenes(unsigned);
	static unsigned find_cap(unsigned);
	static unsigned find_nth_prime(unsigned);
	static void runProject();
};

