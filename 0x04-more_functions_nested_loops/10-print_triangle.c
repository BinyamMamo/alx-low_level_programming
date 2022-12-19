#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
int i = 0;
if (size > 0)
{
for (; i < size; i++)
{
int j = 0;
for (; j < size; j++)
{
if (i + j >= size - 1)
_putchar('#');
else
_putchar(' ');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
