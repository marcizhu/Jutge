#include <iostream>

int calculate()
{
	char op;
	std::cin >> op;

	if(op >= '0' && op <= '9') return op - '0';

	int n1 = calculate();
	int n2 = calculate();

	if(op == '+') return n1 + n2;
	if(op == '-') return n1 - n2;
	if(op == '*') return n1 * n2;
	else return 0; // this never happens
}

int main()
{
	std::cout << calculate() << std::endl;
}