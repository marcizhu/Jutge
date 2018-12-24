#include <iostream>

int main()
{
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);

	double a, b, c;

	std::cin >> a >> b >> c;

	// ax + by + c = 0
	// y = -(ax + c) / b

	if(b != 0.0)
	{
		std::cout << -a / b << std::endl;
		std::cout << -c / b << std::endl;
	}
	else
	{
		std::cout << "impossible" << std::endl;
	}
}