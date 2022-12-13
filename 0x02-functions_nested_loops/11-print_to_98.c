#include<stdio.h>
#include "alx.h"

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
n = n * i;
putchar('-');
}

if (n < 10)
putchar('0' + n);

if (n >= 10 && n < 100)
{
putchar('0' + (n / 10));
putchar('0' + (n % 10));
}

if (n >= 100)
{
putchar('0' + (n / 100));
putchar('0' + ((n / 10) - ((n / 100) * 10)));
putchar('0' + (n % 10));
}

putchar(',');
putchar(' ');
n = (n*i) + x;
}
putchar('9');
putchar('8');
putchar('\n');
}
