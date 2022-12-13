#include "alx.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be computed
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
if (n >= 0)
{
_putchar((n % 10) + '0');
return (n % 10);
}
n = n * -1;
_putchar((n % 10) + '0');
return (n % 10);
}
