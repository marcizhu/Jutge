#include <iostream>
#include <vector>

std::vector<double> difference(const std::vector<double>& v1, const std::vector<double>& v2)
{
	unsigned int s1 = v1.size();
	unsigned int s2 = v2.size();

	std::vector<double> aux;
	int i = 0, j = 0;

	while (i < s1 && j < s2)
	{
		if (v1[i] < v2[j])
		{
			if (aux.empty() || v1[i] != aux.back())
			{
				aux.push_back(v1[i]);
			}

			i++;
		}
		else if (v1[i] > v2[j]) j++;
		else i++;
	}

	while (i < s1)
	{
		if (aux.empty() || v1[i] != aux.back())
		{
			aux.push_back(v1[i]);
		}

		i++;
	}

	return aux;
}