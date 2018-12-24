#include <iostream>

int main()
{
	std::string str;
	int x = 0, y = 0;

	std::cin >> str;

	for(unsigned int i = 0; i < str.length(); i++)
	{
		switch(str[i])
		{
			case 'n': y--; break;
			case 's': y++; break;
			case 'e': x++; break;
			case 'w': x--; break;
		}
	}

	std::cout << "(" << x << ", " << y << ")" << std::endl;

	return 0;
}