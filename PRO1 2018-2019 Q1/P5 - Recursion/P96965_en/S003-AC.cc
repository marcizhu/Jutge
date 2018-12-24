int reduction_of_digits(int x)
{
	int s = 0;
	
	while(x)
	{
		s += x % 10;
		x /= 10;
	}
	
	if(s < 10) return s;
	else return reduction_of_digits(s);
}
