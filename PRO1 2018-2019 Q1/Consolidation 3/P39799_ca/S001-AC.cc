#include <iostream>

struct Punt
{
	double x;
	double y;
};

struct Cercle
{
	Punt p;
	double r;
};

void llegeix(Punt& p)
{
	std::cin >> p.x >> p.y;
}

void llegeix(Cercle& c)
{
	std::cin >> c.p.x >> c.p.y >> c.r;
}

bool isInside(const Punt& p, const Cercle& c)
{
	double distX = p.x - c.p.x;
	double distY = p.y - c.p.y;

	return (distX * distX + distY * distY) <= (c.r * c.r);
}

int main()
{
	Cercle c;
	Punt p;

	llegeix(c);
	llegeix(p);

	unsigned int n;
	std::cin >> n;

	bool inside = isInside(p, c);

	std::cout << "inicialment a " << (inside ? "dins" : "fora") << std::endl;

	for(unsigned int i = 0; i < n; i++)
	{
		Punt j;

		llegeix(j);

		p.x += j.x;
		p.y += j.y;

		bool in = isInside(p, c);

		if(inside != in)
		{
			std::cout << "al pas " << i + 1 << " ha " << (in ? "entrat a dins" : "sortit a fora") << std::endl;
			inside = in;
		}
	}
}