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

int relationship(const Circle& c1, const Circle& c2)
{
	if(c2.radius >= c1.radius + dist(c1.center, c2.center)) return 1;
    if(c1.radius >= c2.radius + dist(c1.center, c2.center)) return 2;
	if(dist(c1.center, c2.center) < c1.radius + c2.radius) return 3;

	return 0;
}

void print(int rel)
{
	switch(rel)
	{
		case 0: std::cout << "circles do not intersect" << std::endl; break;
		case 1: std::cout << "the first circle is inside the second one" << std::endl; break;
		case 2: std::cout << "the second circle is inside the first one" << std::endl; break;
		case 3: std::cout << "circles intersect" << std::endl; break;
	}
}

int main()
{
	Circle c[2];

	std::cin >> c[0].center.x >> c[0].center.y >> c[0].radius;
	std::cin >> c[1].center.x >> c[1].center.y >> c[1].radius;

	print(relationship(c[0], c[1]));

	int n;
	std::string op;

	while(std::cin >> n >> op)
	{
		if(op == "scale")
		{
			double factor;
			std::cin >> factor;

			scale(c[n - 1], factor);
		}
		else if(op == "move")
		{
			Point p;
			std::cin >> p.x >> p.y;

			move(c[n - 1], p);
		}

		print(relationship(c[0], c[1]));
	}
}