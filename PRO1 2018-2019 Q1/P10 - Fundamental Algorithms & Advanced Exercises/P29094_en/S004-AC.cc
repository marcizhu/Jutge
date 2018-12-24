#include <vector>

int position_maximum(const std::vector<double>& v, int m)
{
	int maxPos = 0;

	for(unsigned int i = 0; i <= m; i++)
	{
		if(v[i] > v[maxPos]) maxPos = i;
	}

	return maxPos;
}