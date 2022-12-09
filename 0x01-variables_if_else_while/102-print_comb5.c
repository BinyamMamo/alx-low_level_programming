#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int i, j;
int ii, jj;
for (ii = 48; ii <= 57; ii++)
{
for (i = 48; i <= 57; i++)
{
j = i + 1;
for (jj = ii; jj <= 57; jj++)
{
for (; j <= 57; j++)
{
putchar((char)ii);
putchar((char)i);
putchar(' ');
putchar((char)jj);
putchar((char)j);
if (ii == 57 && i == 56)
continue;
putchar(',');
putchar(' ');
}
j = 48;
}
}
}
putchar('\n');
return (0);
}
