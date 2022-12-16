#include <stdio.h>
#include <math.h>
#include <limits.h>

/**
 * mod - finds the modulo/remainder of two double numbers
 * @a: the first double number
 * @b: the second double number
 * Return: the modulo of the two numbers 
 */
int mod(double a, double b)
{
if (a / b == round(a / b))
return (0);
return (1);
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

void print_number(double n)
{
if(n < 0)
{
putchar('-');
n = n * -1;
}
if(n < 10)
{
putchar('0' + (int)n);
return;
}
int l = len(n);
int i = l - 1;
for (; i >= 0; i--)
{
double p = pow(10, i);
int c = (int)(n / p);
n = n - (c * p);
putchar('0' + c);
}
}
