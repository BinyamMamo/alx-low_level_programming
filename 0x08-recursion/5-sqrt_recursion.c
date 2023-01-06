/**
* sqr - sqr
* @num: first input
* @x: second input
*
* Return: sqrt of a number
*/
int sqr(int num, int x)
{
	int i;

	i = -1;
	if (num == 0 || num == 1)
		return (num);
	if (x > 0)
	{
		if ((num % x == 0) && (num == (x * x)))
			return (x);
		i = sqr(num, x + 1);
	}
	return (i);
}

/**
* _sqrt_recursion - _sqrt_recursion
* @n: first input
*
* Return: sqrt of a number
*/
int _sqrt_recursion(int n)
{
	return (sqr(n, 2));
}
