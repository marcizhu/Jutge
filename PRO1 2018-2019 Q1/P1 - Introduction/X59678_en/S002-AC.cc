#include <iostream>

#define MIN(a, b)	(a < b ? a : b)

int main()
{
	int n1, n2, n3;

	std::cin >> n1 >> n2 >> n3;

	std::cout << MIN(n1, MIN(n2, n3)) << std::endl;

	return 0;
}