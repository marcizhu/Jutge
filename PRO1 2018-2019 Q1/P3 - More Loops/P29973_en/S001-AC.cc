#include <iostream>

int main()
{
	unsigned int n;
	
	std::cin >> n;
	
	for(unsigned int i = 0; i < n; i++)
	{
		for(unsigned int j = 0; j <= i; j++)
		{
			std::cout << "*";
		}
		
		std::cout << std::endl;
	}
}
