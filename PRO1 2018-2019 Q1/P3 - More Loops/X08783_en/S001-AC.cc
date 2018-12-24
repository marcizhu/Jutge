#include <iostream>
#include <cmath>

int main()
{
	unsigned int b, n;
	
	while(std::cin >> b >> n)
	{
		std::cout << (int)((log10(n) / log10(b)) + 1) << std::endl;
	}
}	
