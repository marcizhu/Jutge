#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	unsigned int count;

	while(std::cin >> count)
	{
		std::vector<int> v(count);

		for(unsigned int i = 0; i < count; i++)
		{
			std::cin >> v[i];
		}

		std::sort(v.begin(), v.end(), [](int x, int y) { return x > y; });

		for(unsigned int i = 0; i < count; i++)
		{
			if(i != 0) std::cout << " ";
			std::cout << v[i];
		}

		std::cout << std::endl;
	}
}