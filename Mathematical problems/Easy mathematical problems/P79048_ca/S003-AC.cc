#include <iostream>
#include <cmath>

int main()
{
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);

	double a, b, c;

	std::cin >> a >> b >> c;

	if(b * b - 4.0 * a * c < 0.0)
	{
		std::cout << "sense solucio" << std::endl;

		return 0;
	}

	double sol1 = (-b + sqrt(b * b - 4.0 * a * c)) / (2.0 * a);
	double sol2 = (-b - sqrt(b * b - 4.0 * a * c)) / (2.0 * a);

	std::cout << std::min(sol1, sol2);

	if(sol1 != sol2)
	{
		std::cout << " " << std::max(sol1, sol2);
	}

	std::cout << std::endl;
}