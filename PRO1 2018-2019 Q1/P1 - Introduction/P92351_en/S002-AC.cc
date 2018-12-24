#include <iostream>

int main()
{
	int a, b, d;

	std::cin >> a >> b;
	
	if(a >= 0)
		d = a / b;
	else
		d = a / b - (a % b ? 1 : 0);
	
	std::cout << d << " " << (a - d * b) << std::endl;
}
