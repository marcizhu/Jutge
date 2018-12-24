#include <iostream>
#include <cmath>

unsigned int fact(unsigned int n)
{
	if(n == 0) return 1;

	return n * fact(n - 1);
}

int main()
{
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);

	unsigned int t, c;

	std::cin >> t >> c;
	
	std::cout << fact(t) / (double)(pow(2.0, t) * fact(c) * fact(t - c)) << std::endl;
}