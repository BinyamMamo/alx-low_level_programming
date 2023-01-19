#include <stdio.h>

/**
 * sum_them_all - sum them all
 * @n: first input
 * @...: second input
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	const unsigned int *ptr = &n;

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		ptr++;
		sum += *ptr;
	}

	return (sum);
}
