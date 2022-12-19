#include <stdio.h>
#include "main.h"

int len(char *str);

/**
 * puts_half - prints half of the string starting from the middle
 * @str: string to print
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = len(str) / 2;

	if (len(str) % 2 != 0)
		i++;

	for (; i < len(str); ++i)
	{
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
