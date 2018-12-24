#include <iostream>

int main()
{
	unsigned int n;

	while(std::cin >> n)
	{
		unsigned int total = 0;

		for(unsigned int i = 0; i < n; i++)
		{
			unsigned int in;
			std::cin >> in;

			total ^= in;
		}

		if(total == 0)
			std::cout << "losing" << std::endl;
		else
			std::cout << "winning" << std::endl;
	}
}