#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
putchar((char)i);
for (i = (int)'a'; i <= (int)'f'; i++)
putchar((char)i);
putchar('\n');
return (0);
}
