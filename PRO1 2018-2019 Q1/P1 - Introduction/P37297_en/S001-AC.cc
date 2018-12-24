#include <iostream>

int main()
{
	unsigned int n;
	unsigned int first, second, third;
	
	std::cin >> n;
	
	first = n % 10;
	second = (n % 100 - first) / 10;
	third = (n % 1000 - second - first) / 100;
	
	std::cout << first + second + third << std::endl;
}
