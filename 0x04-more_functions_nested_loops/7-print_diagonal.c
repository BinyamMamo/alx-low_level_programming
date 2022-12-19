#include "main.h"

/**
 * print_diagonal - draws diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: void
 */

void print_diagonal(int n)
{
if (n > 0)
{
int j = 0;
for (; j < n; j++)
{
int i = 0;
for (; i < n; i++)
{
if (i == j)
{
_putchar('\\');
break;
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

