#include <vector>

void bubble_sort(std::vector<double>& v)
{
	for(unsigned int i = 1; i < v.size(); i++)
	{
		for(unsigned int j = 1; j < v.size(); j++)
		{
			if(v[j - 1] > v[j])
			{
				double temp = v[j];
				v[j] = v[j - 1];
				v[j - 1] = temp;
			}
		}
	}
}