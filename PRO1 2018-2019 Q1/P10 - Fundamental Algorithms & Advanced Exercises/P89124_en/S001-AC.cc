#include <vector>
#include <iostream>

const int MAX = 1000000;

std::vector<bool> sieve()
{
	std::vector<bool> ret(MAX + 1, true);

	ret[0] = false;
	ret[1] = false;

	for(unsigned int i = 2; i <= MAX; i++)
	{
		for(unsigned int j = 2*i; j <= MAX; j += i)
		{
			ret[j] = false;
		}
	}

	return ret;
}

int main()
{
	std::vector<bool> primes = sieve();

	unsigned int n;

	while(std::cin >> n)
	{
		std::cout << n << " is" << (primes[n] ? " " : " not ") << "prime" << std::endl;
	}
}