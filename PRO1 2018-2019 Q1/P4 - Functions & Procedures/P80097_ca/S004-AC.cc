#include <iostream>

void pinta_rusc(int f, int c)
{
	for(int x = 0; x < 4 * c - 2; x++)
	{
		if((x - 1) % 4 == 0) std::cout << "_";
		else std::cout << " ";
	}

	std::cout << std::endl;

	for(int i = 0; i < 2 * f; i++)
	{
		for(int j = 0; j < 4 * c - 1; j++)
		{
			const char lookup[] = { '/', ' ', '\\', '_', '\\', '_', '/', ' ' };
			std::cout << lookup[(i % 2) * 4 + (j % 4)];
		}

		std::cout << std::endl;
	}
}

int main()
{
	unsigned int f, c;
	bool first = true;

	while(std::cin >> f >> c)
	{
		if(!first) std::cout << std::endl;
		else first = false;

		pinta_rusc(f, c);
	}
}