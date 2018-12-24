#include <stack>
#include <iostream>
#include <string>

bool isValidSequence(const std::string& input)
{
	bool valid = true;
	std::stack<char> stack;

	for(unsigned int i = 0; i < input.size(); i++)
	{
		if(input[i] == '[' || input[i] == '(')
		{
			stack.push(input[i]);
		}
		else
		{
			if(stack.empty() || (input[i] == ']' && stack.top() != '[') || (input[i] == ')' && stack.top() != '('))
			{
				valid = false;
				break;
			}

			stack.pop();
		}
	}

	return valid && stack.empty();
}

int main()
{
	std::string in;

	while(std::cin >> in)
		std::cout << (isValidSequence(in) ? "yes" : "no") << std::endl;
}