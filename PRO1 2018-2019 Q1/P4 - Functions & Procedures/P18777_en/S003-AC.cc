#include <iostream>
#include <string>
#include <cmath>

std::string day_of_the_week(int d, int m, int y)
{
	int newm = m - 2;

	if(newm <= 0)
	{
		newm += 12;
		y--;
	}

	int c = y / 100;
	int a = y % 100;

	int f = (int)(floor(2.6 * newm - 0.2) + d + a + floor(a / 4.0) + floor(c / 4.0) - 2 * c) % 7;

	if(f < 0) f += 7;

	switch(f)
	{
		case 0: return "Sunday";
		case 1: return "Monday";
		case 2: return "Tuesday";
		case 3: return "Wednesday";
		case 4: return "Thursday";
		case 5: return "Friday";
		case 6: return "Saturday";
	}

	return "";
}