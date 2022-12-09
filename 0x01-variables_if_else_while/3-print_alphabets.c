#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
putchar((char)i);
for (i = 65; i <= 90; i++)
putchar((char)i);
putchar('\n');
return (0);
}
