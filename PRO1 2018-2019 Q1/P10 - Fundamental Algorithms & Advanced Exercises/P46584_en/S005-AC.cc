#include <iostream>
#include <vector>

std::vector<double> difference(const std::vector<double>& v1, const std::vector<double>& v2)
{
	unsigned int s1 = v1.size();
	unsigned int s2 = v2.size();

	std::vector<double> aux(s1);
	int i = 0, j = 0, k = 0;

	while (i < s1 && j < s2)
	{
		if (v1[i] < v2[j])
		{
			if (k == 0 || v1[i] != aux[k-1])
			{
				aux[k] = v1[i];
				++k;
			}
			++i;
		}
		else if (v1[i] > v2[j]) j++;
		else ++i;
	}

	while (i < s1)
	{
		if (k == 0 || aux[k-1] != v1[i])
		{
			aux[k] = v1[i];
			k++;
		}

		i++;
	}

	std::vector<double> dif(k);

	for (i = 0; i < k; i++)
		dif[i] = aux[i];

	return dif;
}
