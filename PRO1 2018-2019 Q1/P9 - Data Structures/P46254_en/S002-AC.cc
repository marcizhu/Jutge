#include <cmath>

struct Point
{
	double x, y;
};

double dist(const Point& a, const Point& b)
{
	double dx = a.x - b.x;
	double dy = a.y - b.y;

	return sqrt(dx * dx + dy * dy);
}