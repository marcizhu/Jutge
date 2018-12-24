#include <iostream>
#include <string>

void reverse()
{
	std::string str;
	std::cin >> str;

	if(str != "end")
	{
		reverse();
		std::cout << str << std::endl;
	}
}

int main()
{
	reverse();
}