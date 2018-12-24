#include <iostream>
#include <cmath>

int main()
{
	int a, b;
	int d, r;

	std::cin >> a >> b;
	
	if(a >= 0)
	{
		d = a / b;
		r = a % b;
	}
	else
	{
		d = a / b - (a % b ? 1 : 0);
		r = a - d * b;
	}
	
	std::cout << d << " " << r << std::endl;
}
