#include <iostream>

int main()
{
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);

	long long a1, b1, c1;
	long long a2, b2, c2;

	std::cin >> a1 >> b1 >> c1;
	std::cin >> a2 >> b2 >> c2;

	c1 *= -1;
	c2 *= -1;

	const long long det1 = c1 * b2 - c2 * b1; // det x
	const long long det2 = a1 * c2 - a2 * c1; // det y
	const long long detm = a1 * b2 - a2 * b1; // det M

	if(detm == 0)
	{
		if(det1 == det2)
			std::cout << "La interseccio es una recta." << std::endl;
		else
			std::cout << "No hi ha interseccio." << std::endl;
	}
	else
	{
		std::cout << (double)det1 / (double)detm << " " << (double)det2 / (double)detm << std::endl;
	}
}