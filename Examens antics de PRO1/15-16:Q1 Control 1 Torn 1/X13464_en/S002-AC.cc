#include <iostream>
#include <cmath>

int main()
{
	int s;
	bool first = true;

	while(std::cin >> s)
	{
		if(!first) std::cout << std::endl;

		first = false;

		for(int y = 0; y < s; y++)
		{
			for(int x = 0; x < s; x++)
			{
				int dist_diag1 = std::abs(x - y);
				int dist_diag2 = std::abs(x+y-(s-1));
				int dist_h = std::min(x, (s - 1) - x);
				int dist_v = std::min(y, (s - 1) - y);

				std::cout << std::min(std::min(dist_diag1, dist_diag2), std::min(dist_v, dist_h)) % 10;
			}

			std::cout << std::endl; 
		}
	}
}