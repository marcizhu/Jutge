#include <vector>
#include <string>

typedef std::vector<std::string> Fila;
typedef std::vector<Fila> Matriu;

int nombre_de_paraules(const Matriu& m, char c, int k)
{
	int count = 0;

	for(unsigned int i = 0; i < m.size(); i++)
	{
		for(unsigned int j = 0; j < m[i].size(); j++)
		{
			const std::string& s = m[i][j];

			if(k < s.size() && s[k] == c)
			{
				count++;
			}
		}
	}

	return count;
}