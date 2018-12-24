#include <string>
#include <vector>

struct Student
{
	int idn;
	std::string name;
	double mark; // The mark is a value between 0 and 10, or -1 that represents NP
	bool repeater;
};

void information(const std::vector<Student>& stu, double& min, double& max, double& avg)
{
	unsigned int count = 0;

	for(unsigned int i = 0; i < stu.size(); i++)
	{
		if(stu[i].repeater || stu[i].mark == -1) continue;

		if(count == 0 || stu[i].mark < min) min = stu[i].mark;
		if(count == 0 || stu[i].mark > max) max = stu[i].mark;

		if(count == 0)
		{
			avg = stu[i].mark;
		}
		else
		{
			avg += stu[i].mark;
		}

		count++;
	}

	if(count == 0)
	{
		min = max = avg = -1;
	}
	else
	{
		avg /= (double)count;
	}
}