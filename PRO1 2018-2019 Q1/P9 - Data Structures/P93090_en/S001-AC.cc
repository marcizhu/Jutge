#include <iostream>

struct Fraction
{
	int num;
	int den; // always strictly positive
};

int gcd(int a, int b)
{
	if (a == 0) return b;
	if (b == 0) return a;

	if (a < b) return gcd(a, b % a);

	return gcd(b, a % b);
}

Fraction addition(const Fraction& x, const Fraction& y)
{
	Fraction q;

	q.num = y.den * x.num + x.den * y.num;
	q.den = y.den * x.den;

	int g = gcd(q.num, q.den);

	q.num /= g;
	q.den /= g;

	return q;
}

Fraction read()
{
	Fraction q;
	char t;

	std::cin >> q.num >> t >> q.den;

	return q;
}

int main()
{
	Fraction result = read();

	char c;

	while(std::cin >> c)
	{
		if(c == '=') break;

		Fraction q2 = read();

		result = addition(result, q2);
	}

	std::cout << result.num << "/" << result.den << std::endl;
}