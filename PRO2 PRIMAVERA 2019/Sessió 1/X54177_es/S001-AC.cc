#include <iostream>

int main()
{
	unsigned int count, x;
	
	std::cin >> count >> x;
	
	for(unsigned int i = 0; i < count; i++)
	{
		int val, sum = 0;
		
		while(std::cin >> val && val != x)
		{
			sum += val;
		}
		
		std::string s;
		std::getline(std::cin, s);
		
		std::cout << "La suma de la secuencia " << i + 1 << " es " << sum << std::endl;
	}
}
