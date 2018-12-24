#include <iostream>

// Input: c is an upper- or lowercase letter
// Output: returns the uppercase Atbash encipherment of c
char atbash(char c)
{
	if(c >= 'a' && c <= 'z')
	{
		// lowercase, move to uppercase
		c = c - 'a' + 'A';
	}

	if(c >= 'A' && c <= 'Z')
	{
		// Uppercase, swap for new and return
		return 'A' + ('Z' - c);
	}

	return 0;
}

int main()
{
	char letra = 0;

	while(letra != '#')
	{
		std::cin >> letra;

		char ret = atbash(letra);
		if(ret) std::cout << ret;
	}

	std::cout << "#" << std::endl;
}