#include <iostream>

int main()
{
	unsigned int b, n;
	
	std::cin >> b;
	
	while(std::cin >> n)
	{
		std::cout << n << ": ";
		
		unsigned int sum = 0;
		
		while(n > 0)
		{
			sum += n % b;
			n /= b;
		}
		
		std::cout << sum << std::endl;
	}
}
