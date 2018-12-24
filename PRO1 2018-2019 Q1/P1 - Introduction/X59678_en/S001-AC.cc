#include <iostream>

inline int min(int a, int b) { return a < b ? a : b; }

int main()
{
	int n1, n2, n3;

	std::cin >> n1;
	std::cin >> n2;
	std::cin >> n3;

	std::cout << min(n1, min(n2, n3)) << std::endl;

	return 0;
}