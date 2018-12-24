#include <iostream>

int main()
{
	int n1, n2;

	std::cin >> n1 >> n2;

	for(int i = n1; i <= n2; i++)
	{
		std::cout << i;

		if(i != n2) std::cout << ",";
	}

	std::cout << std::endl;

	return 0;
}