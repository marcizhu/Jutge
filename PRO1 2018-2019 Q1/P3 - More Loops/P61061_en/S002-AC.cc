#include <iostream>

void product(unsigned int n)
{
	std::cout << "The product of the digits of " << n << " is ";

	if(n == 0)
	{
		std::cout << "0." << std::endl;

		return;
	}
	
	unsigned int a = 1;
	
	while(n > 0)
	{
		a *= n % 10;
		n /= 10;
	}
	
	std::cout << a << "." << std::endl;
	
	if(a >= 10) product(a);
}

int main()
{
	unsigned int n;
	
	while(std::cin >> n)
	{
		product(n);
		
		std::cout << "----------" << std::endl;
	}
}
