#include <iostream>

int main()
{
	unsigned int h, m, s;
	
	std::cin >> h >> m >> s;
	
	s++;
	
	if(s >= 60)
	{
		s = 0;
		m++;
	}
	
	if(m >= 60)
	{
		m = 0;
		h++;
	}
	
	if(h >= 24)
	{
		h = 0;
	}
	
	std::cout << (h < 10 ? "0" : "") << h << (m < 10 ? ":0" : ":") << m << (s < 10 ? ":0" : ":") << s << std::endl;
}
