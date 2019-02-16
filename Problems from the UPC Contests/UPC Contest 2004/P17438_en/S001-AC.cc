#include <iostream>
#include <string>

int main()
{
	unsigned int n;

	std::cin >> n;

	for(unsigned int i = 0; i < n; i++)
	{
		unsigned int total = 0;
		std::string p1, p2;

		std::cin >> p1 >> p2;

		for(unsigned int j = 0; j < 6; j++)
		{
			unsigned int in;
			std::cin >> in;

			total ^= in;
		}

		std::cout << "Game #" << i + 1 << ": ";

		if(total != 0) std::cout << p1 << std::endl;
		if(total == 0) std::cout << p2 << std::endl;
	}
}