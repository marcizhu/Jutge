#include <iostream>

#define MIN(a, b)	(a < b ? a : b)
#define MAX(a, b)	(a > b ? a : b)

int main()
{
	int n;

	std::cin >> n;

	for(int i = 0; i <= n; i++)
	{
		std::cout << i << std::endl;
	}

	return 0;
}