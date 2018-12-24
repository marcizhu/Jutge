#include <iostream>
#include <math.h>

int main()
{
	unsigned int n;

	std::cin >> n;

	if(n == 0)
		std::cout << "The number of digits of 0 is 1." << std::endl; // log10(0) indefinit. 0 sempre te 1 xifra
	else
		std::cout << "The number of digits of " << n << " is " << (int)(log10(n) + 1) << "." << std::endl;

	return 0;
}