#include <iostream>
#include <string>

std::string sum(const std::string& x, const std::string& y)
{
	std::string ret(x.size() + 1, '0');

	int carry = 0;

	for (int i = 0; i < x.size(); ++i)
	{
		int s = carry + x[x.size() - i - 1] - '0';

		if (i < y.size()) s += y[y.size() - i - 1] - '0';

		ret[x.size() - i] = (s % 10) + '0';

		carry = s / 10;
	}

	ret[0] += carry;

	return ret;
}

int main()
{
	std::string x, y;

	while(std::cin >> x >> y)
		std::cout << sum(x, y) << std::endl;
}