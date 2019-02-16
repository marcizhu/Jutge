#include <iostream>
#include <set>
#include <string>
#include <algorithm>

/*void printResults(std::set<std::string>& existing, std::set<std::string>& missing, int count)
{
	if(count > 1) std::cout << std::endl;

	existing.sort([](const std::string& a, const std::string& b) { return a < b; });
	missing.sort([](const std::string& a, const std::string& b) { return (a.size() != b.size() ? a.size() < b.size() : a < b); });

	std::cout << "GAME #" << count << std::endl;
	std::cout << "HAS:" << std::endl;

	for(auto it = existing.begin(); it != existing.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	std::cout << std::endl << "HAD:" << std::endl;

	for(auto it = missing.begin(); it != missing.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}*/

struct cmp
{
	bool operator()(const std::string& a, const std::string& b) const
	{
		return (a.size() != b.size() ? a.size() < b.size() : a < b);
	}
};

int main()
{
	std::string in = "";
	int count = 0;

	while(in != "QUIT")
	{
		std::set<std::string> existingWords;
		std::set<std::string, cmp> missingWords;

		while(std::cin >> in && in != "QUIT" && in != "END")
		{
			auto it = existingWords.find(in);

			if(it != existingWords.end())
			{
				// element exists
				existingWords.erase(it);
				missingWords.insert(in);
			}
			else
			{
				existingWords.insert(in);

				auto iter = missingWords.find(in);

				if(iter != missingWords.end())
				{
					// element exists
					missingWords.erase(iter);
				}
			}
		}

		//printResults(existingWords, missingWords, count++);

		if(count++) std::cout << std::endl;

		std::cout << "GAME #" << count << std::endl;
		std::cout << "HAS:" << std::endl;

		for(auto it = existingWords.begin(); it != existingWords.end(); it++)
		{
			std::cout << *it << std::endl;
		}

		std::cout << std::endl << "HAD:" << std::endl;

		for(auto it = missingWords.begin(); it != missingWords.end(); it++)
		{
			std::cout << *it << std::endl;
		}
	}
}