#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

typedef std::vector<std::vector<std::pair<int, int>>> Matrix;

const int POINTS_WON = 3;
const int POINTS_TIE = 1;
const int POINTS_LOST = 0;

struct Team
{
	int id = 0;
	int points = 0;
	int scored = 0;
	int recieved = 0;
};

std::pair<int, int> readPair()
{
	int x, y;
	std::cin >> x >> y;
	
	return std::make_pair(x, y);
}

Matrix readMatrix()
{
	unsigned int n;
	std::cin >> n;
	
	Matrix ret(n, std::vector<std::pair<int, int>>(n, std::make_pair(0, 0)));
	
	for(unsigned int i = 0; i < n; i++)
	{
		for(unsigned int j = 0; j < n; j++)
		{
			ret[i][j] = readPair();
		}
	}
	
	return ret;
}

std::vector<Team> getSortedTeamArray(const Matrix& mat)
{
	std::vector<Team> ret(mat.size());
	
	for(unsigned int i = 0; i < mat.size(); i++)
	{
		for(unsigned int j = 0; j < mat.size(); j++)
		{
			if(i != j)
			{
				if(mat[i][j].first == mat[i][j].second)
				{
					ret[i].points += POINTS_TIE;
					
					ret[j].points += POINTS_TIE;
				}
				else
				{
					ret[i].points += (mat[i][j].first > mat[i][j].second ? POINTS_WON : POINTS_LOST);
					
					ret[j].points += (mat[i][j].second > mat[i][j].first ? POINTS_WON : POINTS_LOST);
				}
			
				ret[i].id = i;
				ret[i].scored += mat[i][j].first;
				ret[i].recieved += mat[i][j].second;
				
				ret[j].id = j;
				ret[j].scored += mat[i][j].second;
				ret[j].recieved += mat[i][j].first;
			}
		}
	}
	
	std::sort(ret.begin(), ret.end(), [](const Team& t1, const Team& t2) -> bool
		{
			if(t1.points != t2.points) return t1.points > t2.points;
			if((t1.scored - t1.recieved) != (t2.scored - t2.recieved)) return (t1.scored - t1.recieved) > (t2.scored - t2.recieved);
			
			return t1.id < t2.id;
		});
	
	return ret;
}

int main()
{
	Matrix m = readMatrix();
	
	std::vector<Team> teams = getSortedTeamArray(m);
	
	for(Team t : teams)
		std::cout << t.id + 1 << " " << t.points << " " << t.scored << " " << t.recieved << std::endl;
}
