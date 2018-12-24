#include <iostream>

int main()
{
	unsigned int n, m;
	bool first = true;

	while(std::cin >> n >> m)
	{
		if(!first)
			std::cout << std::endl;
		else
			first = false;

		const unsigned int fill = (n + m) % 5;

		for(unsigned int i = 0; i < n; i++)
		{
			for(unsigned int j = 0; j < m; j++)
			{
				std::cout << fill;
			}

			std::cout << std::endl;
		}
	}
}
