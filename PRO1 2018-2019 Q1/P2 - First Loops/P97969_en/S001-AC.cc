#include <iostream>

int main()
{
	std::string str;
	unsigned int count = 0;

	std::getline(std::cin, str);

	for(unsigned int i = 0; i < str.length(); i++)
	{
		if(str[i] == 'a') count++;
	}

	std::cout << count << std::endl;

	return 0;
}