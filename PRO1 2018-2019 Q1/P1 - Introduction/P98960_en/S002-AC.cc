#include <iostream>

int main()
{
	char c;

	std::cin >> c;

	if(c >= 'a' && c <= 'z')
		c = c - 'a' + 'A';
	else
		c = c - 'A' + 'a';

	std::cout << c << std::endl;
}