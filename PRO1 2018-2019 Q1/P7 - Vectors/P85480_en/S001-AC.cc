#include <iostream>
#include <vector>

bool isPrime(unsigned int n)
{
	if(n == 2) return true;
	if(n == 1 || n == 0) return false;

	for(unsigned int i = 2; i*i <= n; i++)
	{
		if(n % i == 0) return false;
	}

	return true;
}

bool sumIsPrime(const std::vector<unsigned int>& data)
{
	for(unsigned int i = 0; i < data.size(); i++)
	{
		for(unsigned int j = 0; j < data.size(); j++)
		{
			if(i == j) continue;
			if(isPrime(data[i] + data[j])) return true;
		}
	}

	return false;
}

int main()
{
	unsigned int n;

	while(std::cin >> n)
	{
		std::vector<unsigned int> vec(n);

		for(unsigned int i = 0; i < n; i++)
		{
			std::cin >> vec[i];
		}

		std::cout << (sumIsPrime(vec) ? "yes" : "no") << std::endl;
	}
}