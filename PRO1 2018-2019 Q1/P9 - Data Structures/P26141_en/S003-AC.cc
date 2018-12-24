#include <iostream>
#include <string>
#include <cmath>

struct Rational
{
	int num;
	int den;
};

int gcd(int a, int b)
{
	if (a == 0) return b;
	if (b == 0) return a;

	if (a < b) return gcd(a, b % a);

	return gcd(b, a % b);
}

Rational rational(int n, int d)
{
	Rational x;

	int y = gcd(std::abs(n), std::abs(d));

	if((n > 0 && d > 0) || (n < 0 && d < 0))
	{
		x.num = std::abs(n) / y;
	}
	else
	{
		x.num = -std::abs(n) / y;
	}

	x.den =  std::abs(d) / y;

	return x;
}

Rational operator*(const Rational& lhs, const Rational& rhs) { return rational(lhs.num * rhs.num, lhs.den * rhs.den); }
Rational operator/(const Rational& lhs, const Rational& rhs) { return rational(lhs.num * rhs.den, lhs.den * rhs.num); }
Rational operator+(const Rational& lhs, const Rational& rhs) { return rational(rhs.den * lhs.num + lhs.den * rhs.num, lhs.den * rhs.den); }
Rational operator-(const Rational& lhs, const Rational& rhs) { return rational(rhs.den * lhs.num - lhs.den * rhs.num, lhs.den * rhs.den); }

void print(const Rational& q)
{
	std::cout << q.num;

	if(q.den > 1) std::cout << "/" << q.den;

	std::cout << std::endl;
}

int main()
{
	int n, d;
	std::string op;

	std::cin >> n >> d;

	Rational q = rational(n, d);

	print(q);

	while(std::cin >> op >> n >> d)
	{
		Rational q2 = rational(n, d);

		if(op == "add") 		q = q + q2;
		if(op == "substract") 	q = q - q2;
		if(op == "multiply") 	q = q * q2;
		if(op == "divide") 		q = q / q2;

		print(q);
	}
}