#include <iostream>

int main()
{
	int n, n2, count = 0;

	std::cin >> n;

	while(std::cin >> n2)
	{
		if(n2 % n == 0) count++;
	}

	std::cout << count << std::endl;

	return 0;
}