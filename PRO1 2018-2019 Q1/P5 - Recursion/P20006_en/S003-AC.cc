#include <iostream>

int calculate()
{
	char op;
	std::cin >> op;

	if(op >= '0' && op <= '9') return op - '0';

	int n1 = calculate();
	int n2 = calculate();

	switch(op)
	{
		case '+': return n1 + n2;
		case '-': return n1 - n2;
		case '*': return n1 * n2;
	}

	return 0;
}

int main()
{
	std::cout << calculate() << std::endl;
}