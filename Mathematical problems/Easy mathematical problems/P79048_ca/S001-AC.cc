#include <iostream>
#include <cmath>

int main()
{
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);

	double a, b, c;

	std::cin >> a >> b >> c;

	if(b * b - 4.0 * a * c == 0.0)
	{
		std::cout << (-b) / (2.0 * a) << std::endl;
	}
	else if(b * b - 4.0 * a * c < 0.0)
	{
		std::cout << "sense solucio" << std::endl;
	}
	else
	{
		double sol1 = (-b + sqrt(b * b - 4.0 * a * c)) / (2.0 * a);
		double sol2 = (-b - sqrt(b * b - 4.0 * a * c)) / (2.0 * a);

		std::cout << std::min(sol1, sol2) << " " << std::max(sol1, sol2) << std::endl;
	}
}