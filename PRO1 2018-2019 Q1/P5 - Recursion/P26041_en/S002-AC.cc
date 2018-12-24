#include <iostream>
#include <string>

void reverse()
{
	std::string str;

	if(std::cin >> str)
	{
		reverse();
		std::cout << str << std::endl;
	}
}

int main()
{
	reverse();
}