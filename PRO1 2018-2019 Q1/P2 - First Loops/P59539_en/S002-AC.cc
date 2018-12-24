#include <iostream>

int main()
{
	unsigned int n;
	double harmonic = 0.0;

	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);

	std::cin >> n;

	for(unsigned int i = 1; i <= n; i++)
	{
		harmonic += 1.0 / (double)i;
	}

	std::cout << harmonic << std::endl;

	return 0;
}