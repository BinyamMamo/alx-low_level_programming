#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, l;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (k = 48; k <= 57; k++)
{
for (l = 49; l <= 57; l++)
{
putchar((char)i);
putchar((char)j);
putchar(' ');
putchar((char)k);
putchar((char)l);
if (i != 57 || k != 57 || l != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
