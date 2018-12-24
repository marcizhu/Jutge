#include <iostream>

int main()
{
	unsigned int n, sum = 0;
	
	std::cin >> n;
	
	for(unsigned int i = 0; i < n; i++)
	{
		for(unsigned int j = 0; j < n; j++)
		{
			char c;
			std::cin >> c;
			
			if(i == j || i + j == n - 1) sum += c - '0';
		}
	}
	
	std::cout << sum << std::endl;
}
