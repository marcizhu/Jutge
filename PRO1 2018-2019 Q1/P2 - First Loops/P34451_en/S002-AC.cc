#include <iostream>

int main()
{
	int n, count = 0;
	int n2;

	std::cin >> n;

	while(std::cin >> n2)
	{
		if(n2 % n == 0) count++;
	}

	std::cout << count << std::endl;

	return 0;
}