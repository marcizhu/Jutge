#include <iostream>

int main()
{
	unsigned int d, m, year;

	while(std::cin >> year)
	{
		int k = year / 100;
		int x = year % 19;
		int b = year % 4;
		int c = year % 7;
		int q = k / 4;
		int p = (13 + 8 * k) / 25;
		int y = (15 - p + k - q) % 30;
		int z = (19 * x + y) % 30;
		int n = (4 + k - q) % 7;
		int e = (2 * b + 4 * c + 6 * z + n) % 7;

		if(z + e <= 9)
		{
			d = 22 + z + e;
			m = 3;
		}
		else if(z == 29 && e == 6)
		{
			d = 19;
			m = 4;
		}
		else if(z == 28 && e == 6 && x > 10)
		{
			d = 18;
			m = 4;
		}
		else
		{
			d = z + e - 9;
			m = 4;
		}

		std::cout << d << "/" << m << std::endl;
	}
}