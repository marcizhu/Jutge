#include <iostream>

int main()
{
	const int daysOfMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int day, month, year;
	
	while(std::cin >> day >> month >> year)
	{
		if(day == 29 && month == 2)
		{
			if(!((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))))
			{
				std::cout << "Incorrect Date" << std::endl; // bad leap year
			}
			else
			{
				std::cout << "Correct Date" << std::endl;
			}
		}
		else if(day < 1 || month < 1 || month > 12 || day > daysOfMonth[month - 1])
		{
			std::cout << "Incorrect Date" << std::endl; // out of range
		}
		else
		{
			std::cout << "Correct Date" << std::endl; // OK
		}
	}
}