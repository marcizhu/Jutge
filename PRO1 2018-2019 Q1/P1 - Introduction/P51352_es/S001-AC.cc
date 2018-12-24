#include <iostream>

int main()
{
	char a, b;

	std::cin >> a >> b;
	
	if(a == b) std::cout << "-" << std::endl;
	
	if(a == 'A' && b == 'P') std::cout << "1" << std::endl;
	if(a == 'P' && b == 'V') std::cout << "1" << std::endl;
	if(a == 'V' && b == 'A') std::cout << "1" << std::endl;
	
	if(b == 'A' && a == 'P') std::cout << "2" << std::endl;
	if(b == 'P' && a == 'V') std::cout << "2" << std::endl;
	if(b == 'V' && a == 'A') std::cout << "2" << std::endl;
}
