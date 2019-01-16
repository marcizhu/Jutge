#include <vector>
#include <string>

std::string exit(int p, std::vector<int>& v)
{
	int s = v.size();

	std::vector<bool> aux(s, false);

	while(!aux[p])
	{
		aux[p] = true;

		if(v[p] > 0)
		{
			if(p + v[p] >= s) return "right";
		}
		else if(v[p] < 0)
		{
			if(p + v[p] < 0) return "left";
		}

		p += v[p];
	}

	return "never";
}