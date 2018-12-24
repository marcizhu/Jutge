#include <iostream>
#include <string>
#include <cmath>

struct Point
{
	double x, y;
};

struct Circle
{
	Point center;
	double radius;
};

void move(Point& p1, const Point& p2)
{
	p1.x += p2.x;
	p1.y += p2.y;
}

void scale(Circle& c, double sca)
{
	c.radius *= sca;
}

void move(Circle& c, const Point& p)
{
	c.center.x += p.x;
	c.center.y += p.y;
}

double dist(const Point& a, const Point& b)
{
	double dx = a.x - b.x;
	double dy = a.y - b.y;

	return std::sqrt(dx * dx + dy * dy);
}

bool is_inside(const Point& p, const Circle& c)
{
	if(dist(p, c.center) < c.radius) return true;

	return false;
}