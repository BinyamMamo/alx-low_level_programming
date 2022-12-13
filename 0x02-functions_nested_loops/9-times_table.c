#include "alx.h"

/**
 * times_table - prints the time table
 * for numbers less than 9
 * Return: void
 */
void times_table(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 9; i++)
{
if ((j * i) < 10)
_putchar((j * i) + '0');
if ((j * i) >= 10)
{
_putchar(((j * i) / 10) + '0');
_putchar(((j * i) % 10) + '0');
}
if (i != 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
_putchar('$');
_putchar('\n');
}
}
