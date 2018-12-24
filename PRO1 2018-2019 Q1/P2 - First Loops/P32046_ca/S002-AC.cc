#include <iostream>

int main()
{
	unsigned int sample, n, count = 0;

	std::cin >> sample;

	std::cout << "nombres que acaben igual que " << sample << ":" << std::endl;

	while(std::cin >> n)
	{
		if(n % 1000 == sample % 1000)
		{
			count++;
			std::cout << n << std::endl;
		}
	}

	std::cout << "total: " << count << std::endl;

	return 0;
}