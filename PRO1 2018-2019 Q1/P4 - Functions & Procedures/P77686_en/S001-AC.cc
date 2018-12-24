bool is_palindromic(int n)
{
	int reversed = 0, num = n;

	while(n != 0)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}

	return num == reversed;
}