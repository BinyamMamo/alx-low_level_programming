#include<stdio.h>
#include "alx.h"

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
int l = len(num);
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

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: the starting number
 * Return: void
 */

void print_to_98(int n)
{
int x;
if (n > 98)
x = -1;
if (n < 98)
x = 1;
while (n < 98 || n > 98)
{
int i = 1;
if (n < 0)
{
i = -1;
n = n *i;
putchar('-');
}

pint(n);
putchar(',');
putchar(' ');
n = (n *i) +x;
}
putchar('9');
putchar('8');
putchar('\n');
}
