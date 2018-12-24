#include <iostream>
#include <cctype>

int main()
{
	char c;

	std::cin >> c;

	// a = 97
	// A = 65
	std::cout << (c >= 97 ? "lowercase" : "uppercase") << std::endl;

	switch(tolower(c))
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			std::cout << "vowel" << std::endl;
			break;

		default:
			std::cout << "consonant" << std::endl;
			break;
	}

	return 0;
}