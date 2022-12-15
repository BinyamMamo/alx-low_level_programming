#include "main.h"

/**
 * print_diagonal - draws diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
int j = 0;
for (; j < n; j++)
{
int i = 0;
for (; i < n; i++)
{
if (i == j)
_putchar('\\');
else
_putchar(' ');
}
_putchar('\n');
}
}

