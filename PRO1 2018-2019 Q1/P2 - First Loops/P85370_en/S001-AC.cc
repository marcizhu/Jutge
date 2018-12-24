#include <iostream>
#include <string>

int main()
{
	std::cout.setf(std::ios::fixed);
    std::cout.precision(4);

	double c, i; // c = initial capital, i = interest
	unsigned int t; // t = time (in years)
	std::string type; // type = "simple" or "compound"

	std::cin >> c >> i >> t >> type;
	
	if(type == "simple")
	{
		c += c * (i / 100.0) * (float)t;
	}
	else
	{
		for(unsigned int j = 0; j < t; j++)
		{
			c += c * (i / 100.0);
		}
	}

	std::cout << c << std::endl;
}