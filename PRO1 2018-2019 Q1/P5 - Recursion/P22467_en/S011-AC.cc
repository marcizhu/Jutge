bool isPrime(int n)
{
	if(n < 2) return false;
	
	for(int i = 2; i*i <= n; i++)
	{
		if(n % i == 0) return false; // not prime
	}
	
	return true;
}

bool is_perfect_prime(int n)
{
	int s = 0, x = n; // suma
	
	while(n > 0)
	{
		s += n % 10;
		n /= 10;
	}
	
	if(isPrime(x) == false) return false;
	else if(s >= 10) return is_perfect_prime(s);
	else if(s < 10 && isPrime(s) == true) return true;
	else return false;
}
