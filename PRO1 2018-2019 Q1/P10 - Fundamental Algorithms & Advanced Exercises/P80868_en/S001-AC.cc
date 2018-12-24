#include <iostream>

unsigned int digits(unsigned int num)
{
	if(num == 0) return 1;

	unsigned int i = 0;

	while(num)
	{
		num /= 10;
		i++;
	}

	return i;
}

void print(unsigned int n, unsigned int r)
{
	unsigned int dig = digits(n);
	unsigned int rowSize = 2 * dig * r + 2 * (r - 1) + 1; // digits + (r - 1) dashes + 1 dot

	for(unsigned int i = 0; i < r; i++)
	{
		for(unsigned int j = 0; j <= i; j++)
		{
			std::cout << n;

			if(j < i) std::cout << "-";
		}

		unsigned int points = rowSize - 2 * dig * (i + 1) - 2 * i;

		for(unsigned int j = 0; j < points; j++)
			std::cout << ".";

		for(unsigned int j = 0; j <= i; j++)
		{
			std::cout << n;

			if(j < i) std::cout << "-";
		}

		std::cout << std::endl;
	}
}

int main()
{
	unsigned int n, r;

	std::cin >> n >> r;

	print(n, r);
}