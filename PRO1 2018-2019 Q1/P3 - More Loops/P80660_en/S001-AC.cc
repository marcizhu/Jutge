#include <iostream>

int main()
{
	unsigned int n;
	
	while(std::cin >> n)
	{
		unsigned int steps = 0;
		
		while(n != 1)
		{
			if(n % 2 == 0) n /= 2;
			else n = n * 3 + 1;
			
			steps++;
		}
		
		std::cout << steps << std::endl;
	}
}
