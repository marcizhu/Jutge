#include <vector>

typedef std::vector< std::vector<int> > Matrix;

Matrix sum(const Matrix& a, const Matrix& b)
{
	unsigned int size = a.size();

	Matrix ret(size, std::vector<int>(size));

	for(unsigned int i = 0; i < size; i++)
	{
		for(unsigned int j = 0; j < size; j++)
		{
			ret[i][j] = a[i][j] + b[i][j];
		}
	}

	return ret;
}