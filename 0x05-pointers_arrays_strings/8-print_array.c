#include <stdio.h>
#include "main.h"
#include <limits.h>

double pw(int, int);
int mod(double a, double b);
int length(double n);

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
 * length - computes the lengthgth of a double number
 * @n: the number whose number of digits
 * is to be calculated
 * Return: the number of digits of n
 */

int length(double n)
{
	int c = 0;

	while (n)
	{
		c++;
		n = (int)(n / 10);
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
	int l = length(num);
	int i = l - 1;

	if (num < 0)
	{
		putchar('-');
		num = num * -1;
	}
	if (num < 10)
	{
		putchar('0' + (int)num);
		return;
	}
	for (; i >= 0; i--)
	{
		double p = pw(10, i);
		int c = (int)(num / p);

		num = num - (c * p);
		putchar('0' + c);
	}
}


int len(char *str);

/**
 * print_array - prints the first n elements of an array
 * @a: array to print
 * @n: number of elements to print
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; ++i)
	{
		print_number(a[i]);
		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}

/**
 * len - finds the length of string
 * @str: a character array to store the input
 * Return: the length of str
 */
int len(char *str)
{
	int c = 0;
	int i = 0;

	for (; str[i] != '\0'; ++i)
	{
		c++;
	}
	return (c);
}
