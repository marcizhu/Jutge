#include <iostream>
#include <vector>
#include <utility>

std::vector<int> readVector()
{
	unsigned int count;
	std::cin >> count;
	
	std::vector<int> v(count);
	
	for(unsigned int i = 0; i < count; i++)
		std::cin >> v[i];
	
	return v;
}	

std::pair<int, int> getMinMax(const std::vector<int>& vec)
{
	int min, max;
	min = max = vec[0];
	
	for(int n : vec)
	{
		min = std::min(n, min);
		max = std::max(n, max);
	}
	
	return std::make_pair(min, max);
}

int main()
{
	std::vector<int> vec = readVector();
	std::pair<int, int> mm = getMinMax(vec);
	
	std::cout << mm.second << " " << mm.first << std::endl;
}
