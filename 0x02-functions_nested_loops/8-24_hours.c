#include "main.h"

/**
 * jack_bauer - prints the minutes from 00:00 - 23:59
 * Return: void
 */
void jack_bauer(void)
{
int i, j;
for (j = 0; j < 24; j++)
{
for (i = 0; i <= 59; i++)
{
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar(':');
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar('\n');
}
}
}
