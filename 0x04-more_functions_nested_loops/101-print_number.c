#include<stdio.h>
#include "main.h"
#include <limits.h>

int pw(int, int);
void pint(int);
int len(int);

/**
 * print_number - prints each character of a number
 * @n: the number to be printed
 * Return: void
 */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
if (n == INT_MIN)
n = INT_MAX;
else
n = n * -1;
}
if (n < 10)
_putchar('0' + n);
else
{
int l = len(n);
int i = l - 1;
int ch;
for (; i >= 0; i--)
{
ch = n / pw(10, i);
n = n % pw(10, i);
_putchar('0' + ch);
}
}
}

/**
 * len - computes the length of digits
 * of an integer number
 * @n: the number whose number of digits
 * is to be calculated
 * Return: the number of digits of n
 */

int len(int n)
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
