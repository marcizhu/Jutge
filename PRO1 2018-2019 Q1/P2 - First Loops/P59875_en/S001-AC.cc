#include <iostream>

#define MAX(a, b)		(a > b ? a : b)
#define MIN(a, b)		(a < b ? a : b)

int main()
{
	int n1, n2;

	std::cin >> n1 >> n2;

	for(int i = MAX(n1, n2); i >= MIN(n1, n2); i--)
	{
		std::cout << i << std::endl;
	}

	return 0;
}