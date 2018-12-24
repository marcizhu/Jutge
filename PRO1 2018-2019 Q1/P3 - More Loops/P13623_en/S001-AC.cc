#include <iostream>

int main()
{
	unsigned int r, c, sum = 0;
	
	std::cin >> r >> c;
	
	for(unsigned int i = 0; i < r; i++)
	{
		for(unsigned int j = 0; j < c; j++)
		{
			char n;
			std::cin >> n;
			
			if((i + j) % 2 == 0) sum += n - '0';
		}
	}
	
	std::cout << sum << std::endl;
}
