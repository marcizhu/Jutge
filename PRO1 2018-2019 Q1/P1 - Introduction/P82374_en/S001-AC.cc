#include <iostream>

int main()
{
	int x, a, b, c, d;
	
	std::cin >> x >> a >> b >> c >> d;
	
	if((x >= a && x <= b) || (x >= c && x <= d))
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
}
