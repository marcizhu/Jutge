#include <iostream>

int main()
{
	int a1, b1, a2, b2;

	std::cin >> a1 >> b1;
	std::cin >> a2 >> b2;

	if(a1 * b2 - b1 * a2 == 0)
		std::cout << "No es invertible." << std::endl;
	else
		std::cout << "Es invertible." << std::endl;
}