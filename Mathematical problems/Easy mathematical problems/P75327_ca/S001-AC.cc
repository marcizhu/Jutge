#include <iostream>
#include <cmath>

int main()
{
	unsigned long long n;

	std::cin >> n;

	std::cout << (unsigned long long)(-1 + sqrt(1 + 8 * n)) / 2 << std::endl;
}