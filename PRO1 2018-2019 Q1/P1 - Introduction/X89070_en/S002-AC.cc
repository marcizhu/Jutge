#include <iostream>

#define MIN(a, b)	(a < b ? a : b)
#define MAX(a, b)	(a > b ? a : b)

int main()
{
	int n1, n2, n3;

	std::cin >> n1 >> n2 >> n3;

	int min = MIN(n1, MIN(n2, n3));
	int max = MAX(n1, MAX(n2, n3));

	std::cout << min + max << std::endl;
}