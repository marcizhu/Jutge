#include <iostream>

#define ABS(a)		(a < 0 ? -a : a)

int main()
{
	int f, c;
	
	std::cin >> f >> c;
	
	for(int i = 0; i < f; i++)
	{
		for(int j = -i; j < c - i; j++)
		{
			std::cout << ABS(j) % 10;
		}
		
		std::cout << std::endl;
	}
}
