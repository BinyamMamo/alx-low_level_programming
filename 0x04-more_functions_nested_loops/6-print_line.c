#include "main.h"

/**
 * print_line - draws straight line in the terminal
 * @n : the numbre of times the character _ should be printed
 */

void print_line(int n)
{
int i = 0;
if (n > 0)
for (; i < n; i++)
_putchar('_');
_putchar('\n');
}
