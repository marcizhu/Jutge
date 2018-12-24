#include <iostream>
#include <cmath>

void print(int n, int base)
{
	if(n > (base - 1)) print(n / base, base);

	std::cout << n % base;
}

int main()
{
	int n, b, c;
	while(std::cin >> n >> b >> c)
	{
		int len = n == 0 ? 1 : (int)(log(n) / log(b) + 1);

		if(len == c)
		{
			print(n, b);
		}
		else if(len < c)
		{
			for(int i = 0; i < c-len; i++)
			{
				std::cout << "#";
			}

			print(n, b);
		}
		else
		{
			for(int i = 0; i < c; i++)
			{
				std::cout << "*";
			}
		}

		std::cout << std::endl;
	}
}