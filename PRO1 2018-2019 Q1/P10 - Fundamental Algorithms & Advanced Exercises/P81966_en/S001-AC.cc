#include <vector>

int position(double x, const std::vector<double>& v, int left, int right)
{
	if(left > right) return -1;

	int mid = (left + right) / 2;

	if(v[mid] > x) return position(x, v, left, mid - 1);
	if(v[mid] < x) return position(x, v, mid + 1, right);

	return mid;
}