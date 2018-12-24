#include <iostream>
#include <string>

void octal(int n)
{
	if(n > 7) octal(n / 8);
	
	std::cout << n % 8;
}

void bin(unsigned int n)
{
	if(n > 1) bin(n / 2);
	
	std::cout << n % 2;
}

void hex(int n)
{
	if(n > 15) hex(n / 16);
	
	int d = n % 16;
	
	if(d < 10) std::cout << d;
	else std::cout << (char)('A' + d - 10);
}

// For every given number, print its binary, octal and hexadecimal notation. Follow the format of the example.
// 9 = 1001, 11, 9

int main()
{
	int n;
	
	while(std::cin >> n)
	{
		std::cout << n << " = ";
		bin(n);
		std::cout << ", ";
		octal(n);
		std::cout << ", ";
		hex(n);
		std::cout << std::endl;
	}
}
