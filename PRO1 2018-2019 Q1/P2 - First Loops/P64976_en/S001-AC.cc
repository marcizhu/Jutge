#include <iostream>

int main()
{
	unsigned int n;

	std::cin >> n;

	for(unsigned int i = 1; i <= n; i++)
	{
		std::cout << n << " x " << i << " = " << n * i << std::endl;
	}

	return 0;
}