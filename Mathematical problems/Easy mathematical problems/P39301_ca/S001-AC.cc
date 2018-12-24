#include <iostream>

int main()
{
	int a1, b1, a2, b2;

	std::cin >> a1 >> b1;
	std::cin >> a2 >> b2;

	const int det = a1 * b2 - b1 * a2;

	if(det == 0)
		std::cout << "No es invertible." << std::endl;
	else
		std::cout << "Es invertible." << std::endl;
}