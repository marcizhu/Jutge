#include <iostream>

int main()
{
	std::cout.setf(std::ios::fixed);
	std::cout.precision(2);

	unsigned int n;
	double n2, sqr = 0.0, norm = 0.0;

	std::cin >> n; // number of elements

	for(unsigned int i = 0; i < n; i++)
	{
		std::cin >> n2;

		sqr += n2 * n2;
		norm += n2;
	}

	std::cout << (sqr / (double)(n - 1.0) - (norm * norm) / (double)(n * (n - 1.0))) << std::endl;

	return 0;
}