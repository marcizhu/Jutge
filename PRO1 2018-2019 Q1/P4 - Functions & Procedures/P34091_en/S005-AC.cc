#include <cmath>
using namespace std;

bool is_perfect(int x)
{
	int primes[] = { 2, 3, 5, 7, 13, 17, 19, 31 };

	for(int i = 0; i < 8; i++)
	{
		if(pow(2.0, primes[i] - 1.0) * (pow(2.0, primes[i]) - 1) == x) return true;
	}

	return false;
}