#include <iostream>

struct Time
{
	int hour;
	int minute;
	int second;
};

void one_second(const Time& t, Time& t1, Time& t2)
{
	t1 = t2 = t;

	t1.second++;
	t2.second--;

	if(t1.second == 60) { t1.minute++; t1.second = 0; }
	if(t1.minute == 60) { t1.hour++; t1.minute = 0; }
	if(t1.hour == 24) t1.hour = 0;

	if(t2.second == -1) { t2.minute--; t2.second = 59; }
	if(t2.minute == -1) { t2.hour--; t2.minute = 59; }
	if(t2.hour == -1) t2.hour = 23;
}

inline void print(const Time& t) { std::cout << t.hour << " " << t.minute << " " << t.second << std::endl; }

int main()
{
	Time t;

	while(std::cin >> t.hour >> t.minute >> t.second)
	{
		Time tp1, tm1;

		one_second(t, tp1, tm1);

		print(tp1);
		print(tm1);
	}
}