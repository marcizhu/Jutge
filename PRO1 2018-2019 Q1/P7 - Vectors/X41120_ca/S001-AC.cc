#include <iostream>
#include <vector>

std::vector<int> calcula_cims(const std::vector<int>& v)
{
	std::vector<int> pics;

	bool goingUp = false; // assume going up;
	for(unsigned int i = 1; i < v.size(); i++)
	{
		if(v[i] > v[i - 1]) goingUp = true;
		if(v[i] == v[i - 1]) goingUp = false;

		if(goingUp && v[i] < v[i - 1])
		{
			// peak
			pics.push_back(v[i - 1]);
			goingUp = false;
		}
	}

	return pics;
}

int main()
{
	unsigned int n;

	std::cin >> n;

	std::vector<int> vec(n);

	for(unsigned int i = 0; i < n; i++)
	{
		std::cin >> vec[i];
	}

	std::vector<int> pics = calcula_cims(vec);

	std::cout << pics.size() << ":";

	for(unsigned int x = 0; x < pics.size(); x++)
	{
		std::cout << " " << pics[x];
	}

	std::cout << std::endl;

	bool first = true;
	for(unsigned int x = 0; x < pics.size(); x++)
	{
		if(pics[x] > pics[pics.size() - 1])
		{
			if(!first)
				std::cout << " ";
			else
				first = false;

			std::cout << pics[x];
		}
	}

	if(first) std::cout << "-";

	std::cout << std::endl;
}