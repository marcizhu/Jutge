#include <iostream>
#include <string>

void reverse(unsigned int& count)
{
	std::string str;

	if(std::cin >> str)
	{
		reverse(count);

		if(count > 0)
		{
			std::cout << str << std::endl;
			count--;
		}
	}
}

int main()
{
	unsigned int n ;
	std::cin >> n;

	reverse(n);
}