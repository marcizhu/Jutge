#include <iostream>
#include <cmath>
#include <string>

int main()
{
	unsigned long long deg;
	signed long long q;

	while(std::cin >> deg)
	{
		bool first = true;
		std::string output = "";

		for(unsigned long long i = 0; i <= deg; i++)
		{
			unsigned long long d = deg - i;
			std::cin >> q;

			if(deg != 0 && q == 0) continue;

			if(!first)
			{
				output += (q < 0 ? " - " : " + ");
			}
			else
			{
				if(q < 0) output += "-";
				
				first = false;
			}

			if(std::abs(q) != 1 || d == 0) output += std::to_string(std::abs(q));

			if(d > 0) output += "x";
			if(d > 1) output += "^" + std::to_string(d);
		}

		std::cout << output << std::endl;
	}
}