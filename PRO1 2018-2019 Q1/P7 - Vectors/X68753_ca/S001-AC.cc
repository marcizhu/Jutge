#include <map>
#include <vector>
#include <iostream>

int moda(const std::vector<int>& data)
{
	std::map<int, int> histogram;

	for(unsigned int i = 0; i < data.size(); i++)
	{
		histogram[data[i]]++;
	}

	unsigned int currentMax = 0;
	int index = 0;

	for(auto it = histogram.begin(); it != histogram.end(); ++it)
	{
		if(it->second >= currentMax)
		{
			currentMax = it->second;
			index = it->first;
		}
	}

	return index;
}

int main()
{
	unsigned int n;

	while(std::cin >> n)
	{
		std::vector<int> elements(n);

		for(unsigned int i = 0; i < n; i++)
		{
			std::cin >> elements[i];
		}

		std::cout << moda(elements) << std::endl;
	}
}