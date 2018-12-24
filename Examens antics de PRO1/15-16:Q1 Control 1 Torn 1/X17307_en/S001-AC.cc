#include <iostream>
#include <cmath>

int main()
{
	unsigned int count;
	int prev, current;

	while(std::cin >> count)
	{
		std::cin >> prev;
		int max = 0;

		for(unsigned int i = 1; i < count; i++)
		{
			std::cin >> current;

			int distance = std::abs(current - prev);

			max = std::max(distance, max);
			prev = current;
		}

		std::cout << max << std::endl;
	}
}