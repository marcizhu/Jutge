#include <iostream>

int main()
{
	char c;

	std::cin >> c;

	// a = 97
	// A = 65
	c = c >= 97 ? (c - 97 + 65) : (c - 65 + 97);

	std::cout << c << std::endl;

	return 0;
}