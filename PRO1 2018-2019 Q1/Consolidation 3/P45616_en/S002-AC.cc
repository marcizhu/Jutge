#include <iostream>

struct Clock
{
	int h; // hours (0<=h<24)
	int m; // minutes (0<=m<60)
	int s; // seconds (0<=s<60)
};

Clock midnight()
{
	Clock ret;

	ret.h = 0;
	ret.m = 0;
	ret.s = 0;

	return ret;
}

void increase(Clock& r)
{
	r.s++;

	if(r.s == 60)
	{
		r.s = 0;
		r.m++;
	}

	if(r.m == 60)
	{
		r.m = 0;
		r.h++;
	}

	if(r.h == 24) r.h = 0;
}

void print(const Clock& r) { std::cout << (r.h < 10 ? "0" : "") << r.h << ":" << (r.m < 10 ? "0" : "") << r.m << ":" << (r.s < 10 ? "0" : "") << r.s << std::endl; }