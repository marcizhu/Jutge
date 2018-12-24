#include <stack>
#include <iostream>
#include <string>

bool isValidSequence(const std::string& input)
{
	std::stack<char> stack;

	for(unsigned int i = 0; i < input.size(); i++)
	{
		if(input[i] == '[' || input[i] == '(')
		{
			stack.push(input[i]);
		}
		else
		{
			if(stack.empty() || (input[i] == ']' && stack.top() != '[') || (input[i] == ')' && stack.top() != '(')) return false;

			stack.pop();
		}
	}

	return stack.empty();
}

int main()
{
	std::string in;

	while(std::cin >> in)
	{
		std::cout << (isValidSequence(in) ? "yes" : "no") << std::endl;
	}
}