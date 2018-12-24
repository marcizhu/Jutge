#include <iostream>
#include <cmath>

using namespace std;

struct Rational
{
	int num;
	int den;
};

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	else if (b == 0)
		return a;

	if (a < b)
		return gcd(a, b % a);
	else
		return gcd(b, a % b);
}

Rational rational(int n, int d)
{
	Rational x;

	if (n == 0)
	{
		x.num = 0;
		x.den = 1;
	}
	else if((n > 0 && d > 0) || (n < 0 && d < 0))
	{
		int y = gcd(abs(n), abs(d));

		x.num = abs(n) / y;
		x.den = abs(d) / y;
	}
	else
	{
		int y = gcd(abs(n), abs(d));

		x.num = -abs(n) / y;
		x.den =  abs(d) / y;
	}

	return x;
}

int main()
{
	int a, b;
	cin >> a >> b;

	Rational q = rational(a, b);

	cout << q.num << " " << q.den << endl;
}