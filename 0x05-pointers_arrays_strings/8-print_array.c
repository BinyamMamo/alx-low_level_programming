#include <stdio.h>

int pw(int, int);
void pint(int);
int len(int);

/**
 * pint - prints each character of a number
 * using the putchar function in stdio.h library
 * @num: the base number
 * @num: the number to be printed
 * Return: void
 */

void pint(int num)
{
	if (num < 10)
		putchar('0' + num);
	else
	{
		int l = length(num);
		int i = l - 1;
		int ch;

		for (; i >= 0; i--)
		{
			ch = num / pw(10, i);
			num = num % pw(10, i);
			putchar('0' + ch);
		}
	}
}

/**
 * length - computes the length of digits
 * of an integer number
 * @n: the number whose number of digits
 * is to be calculated
 * Return: the number of digits of n
 */

int length(int n)
{
int i;
for (i = 1; i <= 10; i++)
{
if ((n / pw(10, i)) == 0)
break;
}
return (i);
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
r = r *n;
return (r);
}

int length(char *str);

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
		pint(a[i]);
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
