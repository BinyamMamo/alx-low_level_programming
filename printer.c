#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void print(int a);
void println(int a);

int num_len(unsigned int n)
{
	int i = 0;

	while (n != 0)
	{
		n /= 10;
		i++;
	}
	if (i == 0)
		return (0);
	else
		return (--i);
}

/**
 * pw - opt for the pow() function in math.h lib
 * @n: the base number
 * @p: the power
 * Return: n to the power of p
 */

int pw(int n, int p)
{
	int i = 0, r = 1;
	for (; i < p; i++)
		r = r * n;
	return (r);
}

int printer(unsigned int n)
{
	int i = 0, len = num_len(n), count = 0;
	unsigned int pow = 1;
	char c;

	for (i = len; i >= 0; i--)
	{
		pow = pw(10, i);

		c = (n / pow) + 48;
		n = n % pow;
		write(1, &c, 1);
		count++;
	}

	return (count);
}

int main()
{
	printf(" => %d", printer(123));
}