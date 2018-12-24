#include <string>
#include <iostream>

std::string prefix(unsigned int n, unsigned int i, bool billions)
{
	std::string prefix[] = { "", "mil", "milio", "mil" };

	if(i == 2 && (n > 0 || billions))
	{
		// millions
		return prefix[i] + ((n > 1 || billions) ? "ns" : "");
	}
	else if(n > 0)
	{
		return prefix[i];
	}

	return "";
}

std::string triplet(unsigned int n, unsigned int i)
{
	std::string units[] = { "zero", "un", "dos", "tres", "quatre", "cinc", "sis", "set", "vuit", "nou" };
	std::string decades[] = { "", "", "vint", "trenta", "quaranta", "cinquanta", "seixanta", "setanta", "vuitanta", "noranta" };
	std::string specials[] = { "deu", "onze", "dotze", "tretze", "catorze", "quinze", "setze", "disset", "divuit", "dinou" };

	std::string ret = "";

	unsigned int u =  n % 10;
	unsigned int d = (n % 100)  / 10;
	unsigned int c = (n % 1000) / 100;

	if(i == 0 || i == 2 || n % 1000 > 1)
	{
		if(d == 0)
		{
			if(u > 0) ret = units[u];
		}
		else if(d == 1)
		{
			ret = specials[u];
		}
		else
		{
			if(u > 0) ret = units[u];
			if(d == 2 && u > 0) ret = "i-" + ret;
			ret = decades[d] + (u > 0 ? "-" : "") + ret;
		}

		if(ret.size() > 0 && c > 0) ret = " " + ret;

		if(c == 1)
		{
			ret = "cent" + ret;
		}
		else if(c > 1)
		{
			ret = units[c] + "-cents" + ret;
		}
	}

	return ret;
}

std::string numero(unsigned int n)
{
	if(n == 0) return "zero";

	std::string ret = "";
	unsigned int i = 0;

	while(n)
	{
		std::string t = triplet(n % 1000, i);
		std::string pre = prefix(n % 1000, i, n >= 1000);

		if(ret.size() > 0 && pre.size() > 0) ret = " " + ret;

		ret = pre + ret;

		if(ret.size() > 0 && t.size() > 0) ret = " " + ret;

		ret = t + ret;

		n /= 1000;
		i++;
	}

	return ret;
}

int main()
{
	unsigned int n;

	while(std::cin >> n)
	{
		std::cout << n << ": " << numero(n) << "." << std::endl;
	}
}