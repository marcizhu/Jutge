#include <iostream>
#include <cmath>

int main()
{
	unsigned int n;
	
	std::cin >> n;
	
	unsigned int odd = 0, even = 0, len = (unsigned int)(log10(n) + 1);
	
	for(unsigned int i = 1; i <= len; i++)
	{
		if(i % 2 == 0)
			even += n % 10;
		else
			odd += n % 10;
		
		n /= 10;
	}
	
	std::cout << odd << " " << even << std::endl;
	
	const unsigned int max = std::max(odd, even);
	const unsigned int min = std::min(odd, even);
	
	if(min != 0 && max % min == 0)
	{
		std::cout << max << " = " << max / min << " * " << min << std::endl; 
	}
	else if(min == 0)
	{
		std::cout << "0 = 0 * " << max << std::endl; 
	}
	else
	{
		std::cout << "nothing" << std::endl;
	}
}