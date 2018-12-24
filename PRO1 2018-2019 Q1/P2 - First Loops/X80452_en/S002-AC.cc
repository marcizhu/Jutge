#include <iostream>

int main()
{
	unsigned int cents;

	while(std::cin >> cents)
	{
		unsigned int p = 0, q = 0;

		for(unsigned int i = 0; i < (cents / 7 + 1); i++)
		{
			if((cents - 7 * i) % 4 == 0)
			{
				if((i + (cents - 7 * i) / 4 < p + q) || (p == 0 && q == 0))
				{
					p = i;
					q = (cents - 7 * i) / 4;
				}
			}
		}

		std::cout << p << " " << q << std::endl;
	}
}