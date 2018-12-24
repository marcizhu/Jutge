#include <iostream>
#include <cmath>

int main()
{
	std::cout.setf(std::ios::fixed);
	std::cout.precision(6);

	unsigned int n;

	while(std::cin >> n)
	{
		std::cout << n * n << " " << std::sqrt(n) << std::endl;
	}
}