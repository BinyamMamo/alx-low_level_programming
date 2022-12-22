#include "main.h"
#include <limits.h>

double pw(int, int);
int mod(double a, double b);
int len(double n);

/**
 * mod - finds the modulo/remainder of two double numbers
 * @a: the first double number
 * @b: the second double number
 * Return: the modulo of the two numbers
 */
int mod(double a, double b)
{
	if (a / b == (int)(a / b))
		return (0);
	return (1);
}

/**
 * pw - opt for the pow() function in math.h lib
 * @n: the base number
 * @p: the power
 * Return: n to the power of p
 */

double pw(int n, int p)
{
	int i = 0, r = 1;

	for (; i < p; i++)
		r = r * n;
	return (r);
}

/**
 * len - computes the length of a double number
 * @n: the number whose number of digits
 * is to be calculated
 * Return: the number of digits of n
 */

int len(double n)
{
	int c = 0;

	while (n)
	{
		c++;
		n = (int)n / 10;
	}
	return (c);
}

/**
 * print_number - prints each character of a number
 * @n: the number to be printed
 * Return: void
 */

void print_number(int n)
{
	double num = n;
	int l = len(num);
	int i = l - 1;

	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}

	if (num < 10)
	{
		_putchar('0' + (int)num);
		return;
	}

	for (; i >= 0; i--)
	{
		double p = pw(10, i);
		int c = (int)(num / p);

		num = num - (c * p);
		_putchar('0' + c);
	}
}
