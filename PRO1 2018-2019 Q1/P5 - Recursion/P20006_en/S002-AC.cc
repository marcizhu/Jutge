#include <iostream>
#include <string>

int calculate(char op)
{
	if(op >= '0' && op <= '9') return op - '0';

	char c1, c2;
	int n1, n2;

	std::cin >> c1;

	n1 = calculate(c1);

	std::cin >> c2;

	n2 = calculate(c2);

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
	char op;
	std::cin >> op;

	std::cout << calculate(op) << std::endl;
}