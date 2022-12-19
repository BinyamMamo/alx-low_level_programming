#include <stdio.h>

int len(char *);

/**
 * puts2 - prints even items of a string
 * @str: string to print
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	for (; i < len(str); ++i)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}

/**
 * len - finds the length of string
 * @str: a character array to store the input
 * Return: the length of str
 */
int len(char *str)
{
	int c = 0;
	int i = 0;

	for (; str[i] != '\0'; ++i)
	{
		c++;
	}
	return (c);
}
