#include <iostream>
#include <cctype>

int main()
{
	char c;

	std::cin >> c;

	std::cout << (c >= 'a' ? "lowercase" : "uppercase") << std::endl;

	c = tolower(c);

	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		std::cout << "vowel" << std::endl;
	else
		std::cout << "consonant" << std::endl;

	return 0;
}