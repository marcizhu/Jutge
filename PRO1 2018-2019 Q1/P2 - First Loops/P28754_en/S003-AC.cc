#include <iostream>
#include <math.h> // log2

int main()
{
	unsigned int n;

	std::cin >> n;

	// log2(0) indefinit
	if(n == 0)
	{
		std::cout << "0" << std::endl;
		
		return 0;
	}

	// Numero de bits d'un nombre n = log2(n) (arrodonit a l'alça)
	for(unsigned int i = 0; i < (unsigned int)(log2(n) + 1); i++)
	{
		std::cout << ((n >> i) & 1);
	}

	std::cout << std::endl;

	return 0;
}