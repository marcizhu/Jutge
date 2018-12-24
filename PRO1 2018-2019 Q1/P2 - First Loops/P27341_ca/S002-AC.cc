#include <iostream>

int main()
{
	int a, b;

	while(std::cin >> a >> b)
	{
		int count = 0;

		for(int i = a; i <= b; i++)
		{
			count += i * i * i;
		}

		std::cout << "suma dels cubs entre " << a << " i " << b << ": " << count << std::endl;
	}

	return 0;
}