#include <vector>
#include <iostream>

void selection_sort(std::vector<double>& v, int m)
{
	if(m < 0) return;

	int maxPos = 0;

	for(unsigned int i = 0; i <= m; i++)
	{
		if(v[i] > v[maxPos]) maxPos = i;
	}

	double temp = v[m];
	v[m] = v[maxPos];
	v[maxPos] = temp;

	selection_sort(v, m - 1);
}