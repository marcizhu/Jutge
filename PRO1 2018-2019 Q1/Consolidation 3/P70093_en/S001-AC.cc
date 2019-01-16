#include <vector>

std::vector<double> merge(const std::vector<double>& v1, const std::vector<double>& v2)
{
	std::vector<double> ret;

	unsigned int i = 0, j = 0;

	while(i < v1.size() && j < v2.size())
	{
		if(v1[i] < v2[j])
		{
			ret.push_back(v1[i++]);
		}
		else
		{
			ret.push_back(v2[j++]);
		}
	}

	while(i < v1.size())
	{
		ret.push_back(v1[i++]);
	}

	while(j < v2.size())
	{
		ret.push_back(v2[j++]);
	}

	return ret;
}