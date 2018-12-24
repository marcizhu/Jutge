#include <iostream>
#include <math.h>

int main()
{
	int base;
	unsigned int exp;

	while(std::cin >> base >> exp)
	{
		std::cout << (int)pow(base, exp) << std::endl;
	}

	return 0;
}