#include "main.h"

/**
 * print_times_table - prints the nth time table
 * @n: the nth number
 * Return: void
 */
void print_times_table(int n)
{
int j;
if (n < 0 || n > 15)
return;
for (j = 0; j <= n; j++)
{
int i;
for (i = 0; i <= n; i++)
{
if (i != 0)
{
_putchar(',');
_putchar(' ');
if ((i * j) < 10)
_putchar(' ');
if ((i * j) < 100)
_putchar(' ');
}
if ((j * i) < 10)
_putchar((j * i) + '0');
if ((j * i) >= 10 && (j * i) < 100)
{
_putchar(((j * i) / 10) + '0');
_putchar(((j * i) % 10) + '0');
}
if ((j * i) >= 100)
{
_putchar(((j * i) / 100) + '0');
_putchar((((j * i) / 10) % 10) + '0');
_putchar(((j * i) % 10) + '0');
}
}
_putchar('\n');
}
}
