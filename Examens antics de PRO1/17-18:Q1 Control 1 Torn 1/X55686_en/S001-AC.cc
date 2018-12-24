#include <iostream>

int main()
{
	int n;
	char c;

	std::cin >> n >> c;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == j) std::cout << c;
			else if(i + j == n - 1) std::cout << c;
			else if(j == (n - 1) / 2) std::cout << c;
			else if(i == (n - 1) / 2) std::cout << c;
			else std::cout << '.';
		}

		std::cout << std::endl;
	}
}