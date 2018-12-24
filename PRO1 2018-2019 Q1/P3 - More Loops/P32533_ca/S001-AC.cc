#include <iostream>

int main()
{
	unsigned int n;
	
	std::cin >> n;
	
	for(unsigned int i = 0; i < n; i++)
	{
		for(unsigned int j = 0; j < n; j++)
		{
			if(i + j < n - 1) std::cout << "+";
			else if(i + j == n - 1) std::cout << "/";
			else std::cout << "*";
		}
		
		std::cout << std::endl;
	}
}
