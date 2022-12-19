#include <stdio.h>

int len(char *str);

/**
 * print_rev - print string in reverse
 * @str: string to print
 * Return: nothing
 */
void print_rev(char *str)
{
	int i = len(str) - 1;

	for (; i >= 0; --i)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

/**
 * len - finds the length of a string
 * @str: a character array to store the input
 * Return: the length of str
 */
int len(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}
