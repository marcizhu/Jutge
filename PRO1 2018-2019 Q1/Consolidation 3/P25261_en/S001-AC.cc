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

		std::sort(v.begin(), v.end());

		for(unsigned int i = 1; i <= count; i++)
		{
			if(i != 1) std::cout << " ";
			std::cout << v[count - i];
		}

		std::cout << std::endl;
	}
}