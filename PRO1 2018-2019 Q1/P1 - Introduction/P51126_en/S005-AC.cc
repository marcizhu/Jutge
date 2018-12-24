#include <iostream>

#define MIN(a, b)	a < b ? a : b
#define MAX(a, b)	a > b ? a : b

int main()
{
	int a1, a2, b1, b2;

	std::cin >> a1;
	std::cin >> a2;
	std::cin >> b1;
	std::cin >> b2;

	std::cout << "[";

	if(a2 >= b1 && a1 <= b2)
	{
		std::cout << (MAX(a1, b1)) << "," << (MIN(a2, b2));
	}

	std::cout << "]\n";

	return 0;
}