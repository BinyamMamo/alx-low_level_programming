#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked
 * Return: 1 if the number is positive,
 * 0 if the number is zero
 * and -1 if the number is negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
_putchar('-');
return (-1);
}
