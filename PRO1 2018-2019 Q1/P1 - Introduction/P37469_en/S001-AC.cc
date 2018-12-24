#include <iostream>

int main()
{
	unsigned int n;
	
	std::cin >> n;
	
	int h = n / 3600, m = (n % 3600) / 60, s = (n % 3600) % 60;
	
	std::cout << h << " " << m << " " << s << std::endl;
}
