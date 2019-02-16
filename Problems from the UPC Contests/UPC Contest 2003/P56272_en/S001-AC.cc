#include <iostream>
#include <vector>

const int MAX_NUM = 51;

std::vector<std::vector<std::vector<long long>>> mat3(MAX_NUM, std::vector<std::vector<long long>>(MAX_NUM, std::vector<long long>(MAX_NUM, -1)));

long long pawnsImpl(int i, int j, int k)
{
	if(k < 0 || k >= j) return 0;

	if(i == 0) return 1;
	//if(i == 1) return j;

	if(mat3[i][j][k] != -1) return mat3[i][j][k];

	mat3[i][j][k] = pawnsImpl(i - 1, j, k - 1) + pawnsImpl(i - 1, j, k + 1);

	return mat3[i][j][k];
}

inline unsigned long long pawns(int i, int j)
{
	if(i == 1) return j;
	unsigned long long res = 0;

	for(int x = 0; x < j; x++)
		res += pawnsImpl(i - 1, j, x);

	return res;
}

int main()
{
	int i, j;

	while(std::cin >> i >> j)
	{
		std::cout << pawns(i, j) << std::endl;
	}
}