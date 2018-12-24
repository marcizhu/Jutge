#include <iostream>

int main()
{
	int a1, b1, c1;
	int a2, b2, c2;

	std::cin >> a1 >> b1 >> c1;
	std::cin >> a2 >> b2 >> c2;

	const int det1 = a1 * b2 - b1 * a2;
	const int det2 = b1 * c2 - c1 * b2;

	if(det1 == 0 && det2 == 0)
		std::cout << "SI" << std::endl;
	else
		std::cout << "NO" << std::endl;
}