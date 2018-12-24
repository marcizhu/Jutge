#include <iostream>
#include <math.h>

int main()
{
	int base;
	unsigned int exp;

	while(std::cin >> base >> exp)
	{
		if(base == 0 && exp == 0)
		{
			std::cout << "1" << std::endl;
			continue;
		}

		std::cout << (int)pow(base, exp) << std::endl;
	}

	return 0;
}