#include <iostream>
#include <cmath>

int main()
{
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);

	double x, c, ans = 0.0;

	std::cin >> x;

	for(unsigned int i = 0; std::cin >> c; i++)
	{
		ans += c * pow(x, i);
	}

	std::cout << ans << std::endl;
}