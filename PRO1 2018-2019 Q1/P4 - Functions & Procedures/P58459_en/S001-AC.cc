#include <iostream>

bool is_valid_date(int day, int month, int year)
{
	const int daysOfMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if(day == 29 && month == 2)
	{
		if(!((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))))
		{
			return false; // bad leap year
		}
		else
		{
			return true;
		}
	}
	else if(day < 1 || month < 1 || month > 12 || day > daysOfMonth[month - 1])
	{
		return false; // out of range
	}

	return true;
}