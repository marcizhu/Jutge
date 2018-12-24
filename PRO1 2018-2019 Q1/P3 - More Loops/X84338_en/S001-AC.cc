#include <iostream>
#include <cmath>

int main()
{
	unsigned int n;
	
	std::cin >> n;
	
	if(n == 0 || (unsigned int)(log10(n) + 1) % 2)
	{
		std::cout << "nothing" << std::endl;
	}
	else
	{
		unsigned int first = 0, second = 0, len = (unsigned int)(log10(n) + 1);
		
		for(unsigned int i = 0; i < len; i++)
		{
			if(i < len / 2)
				second += n % 10;
			else
				first += n % 10;
			
			n /= 10;
		}
		
		std::cout << first;
		
		if(first < second) std::cout << " < ";
		if(first > second) std::cout << " > ";
		if(first == second) std::cout << " = ";
		
		std::cout << second << std::endl;
	}
}
