#include <iostream>
#include <math.h>

int main()
{
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);
	
	double i;
	std::string in;
	
	std::cin >> i >> in;
	i /= 100.0;
	
	if(in == "setmanal")   std::cout << 100.0 * (pow(i / 52.0 + 1.0, 52.0) - 1.0) << std::endl;
	if(in == "mensual")    std::cout << 100.0 * (pow(i / 12.0 + 1.0, 12.0) - 1.0) << std::endl;
	if(in == "trimestral") std::cout << 100.0 * (pow(i /  4.0 + 1.0,  4.0) - 1.0) << std::endl;
	if(in == "semestral")  std::cout << 100.0 * (pow(i /  2.0 + 1.0,  2.0) - 1.0) << std::endl;
}
