#include <iostream>
#include <math.h> // log2

int main()
{
	unsigned int n;

	std::cin >> n;

	// Numero de bits d'un nombre n en base b = log(n) / log(b)
	// (logaritme en base b de n, aplicant canvi de base i arrodonint a l'alça)

	for(unsigned int i = 2; i <= 16; i++)
	{
		std::cout << "Base " << i << ": " << (int)(log(n) / log(i) + 1) << " cifras." << std::endl;
	}

	return 0;
}