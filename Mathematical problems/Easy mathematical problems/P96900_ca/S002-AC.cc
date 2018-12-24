#include <iostream>
#include <cmath>

int main()
{
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);

	double adv, va, vt;

	std::cin >> adv >> va >> vt;

	if(va - vt > 0)
	{
		std::cout << adv / (va - vt) << " segons" << std::endl;
	}
	else
	{
		std::cout << "mai" << std::endl;
	}
}