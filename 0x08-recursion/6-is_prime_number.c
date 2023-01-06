int prime(int num, int x);

/**
* prime - prime
* @num: first input
* @x: second input
* Return: number of factors
*/
int prime(int num, int x)
{
	int i;

	i = 0;
	if (num <= 2)
		return (1);
	if (x > 1)
	{
		i = prime(num, x - 1);
		if (num % x == 0)
		{
			i++;
		}
	}
	return (i);
}

/**
* is_prime_number - is_prime_number
* @n: first input
*
* Return: 1 or 0
*/
int is_prime_number(int n)
{
	if (prime(n, n - 1) > 0)
		return (0);
	return (1);
}
