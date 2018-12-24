#include <iostream>

int main()
{
	unsigned int n;
	
	std::cin >> n;
	
	unsigned int first = n % 10;
	unsigned int second = (n % 100) / 10;
	unsigned int third = (n % 1000) / 100;
	
	std::cout << first + second + third << std::endl;
}