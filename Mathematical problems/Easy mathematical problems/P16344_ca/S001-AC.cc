#include <iostream>

int main()
{
	int a1, b1, c1;
	int a2, b2, c2;
	int a3, b3, c3;

	std::cin >> a1 >> b1 >> c1;
	std::cin >> a2 >> b2 >> c2;
	std::cin >> a3 >> b3 >> c3;

	const int det = a1 * b2 * c3 + c1 * a2 * b3 + a3 * b1 * c2 - (a3 * b2 * c1 + b3 * c2 * a1 + a2 * b1 * c3); 

	if(det == 0)
		std::cout << "No es invertible." << std::endl;
	else
		std::cout << "Es invertible." << std::endl;
}