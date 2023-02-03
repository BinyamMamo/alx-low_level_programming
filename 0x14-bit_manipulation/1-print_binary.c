#include "main.h"
#include <unistd.h>

int num_len(unsigned int n);
int print_uint(unsigned int n);

/**
 * print_binary - print binary
 * @n: first input
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = 0; i < 32; i++)
		print_uint(get_bit(n, i));
}

/**
 * get_bit - get bit at any index
 * @n: first input
 * @index: second input
 *
 * Return: the bit at the specified index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (index >= 32 ? -1 : n && (n & (1 << index)));
}

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

unsigned int pw(unsigned int n, unsigned int p)
{
	int i = 0, r = 1;
	for (; i < p; i++)
		r = r * n;
	return (r);
}

int print_uint(unsigned int n)
{
	int i = 0, len = num_len(n), count = 0;
	unsigned int pow = 1;
	char c;

	for (i = len; i >= 0; i--)
	{
		pow = pw(10, (unsigned int)i);

		c = (n / pow) + 48;
		n = n % pow;
		write(1, &c, 1);
		count++;
	}

	return (count);
}
