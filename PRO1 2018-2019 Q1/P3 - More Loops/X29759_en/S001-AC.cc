#include <iostream>

int main()
{
	unsigned int n;
	int black = 0, white = 0;
	
	std::cin >> n;
	
	for(unsigned int i = 0; i < n; i++)
	{
		for(unsigned int j = 0; j < n; j++)
		{
			char c;
			std::cin >> c;
			
			if((i + j) % 2 == 0)
			{
				white += c - '0';
			}
			else
			{
				black += c - '0';
			}
		}
	}
	
	std::cout << white << "-" << black << " = " << white - black << std::endl;
}
