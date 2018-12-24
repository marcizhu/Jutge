#include <iostream>

int main()
{
	unsigned int d, t, weeks = 0;
	signed int n;

	std::cin >> d >> n >> t;

	for(unsigned int i = 0; i < t; i++)
	{
		unsigned int temp;
		std::cin >> temp;

		n -= d;
		n += temp;

		if(n > 0) weeks++;
	}

	std::cout << weeks << std::endl;

	return 0;
}