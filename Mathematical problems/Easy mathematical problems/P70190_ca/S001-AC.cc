#include <iostream>

int main()
{
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);

	double a, b, c;

	std::cin >> a >> b >> c;

	double x = (-b / (2.0 * a));

	std::cout << x << std::endl;
	std::cout << a * x * x + b * x + c << std::endl;
	std::cout << (a < 0.0 ? "maxim" : "minim") << std::endl;
}