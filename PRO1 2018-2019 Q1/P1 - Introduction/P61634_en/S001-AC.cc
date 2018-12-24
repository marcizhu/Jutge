#include <iostream>

int main()
{
	unsigned int year;
	
	std::cin >> year;
	
	if((year % 4 == 0) && ((year % 100 != 0) || ((year / 100) % 4 == 0)))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
}
