#include <stdio.h>

int len(char *);

/**
 * rev_string - access the string through the pointer and reverse it
 * @str: the address of the string to reverse
 * Return: nothing
 */
void rev_string(char *str)
{
	int i = 0;

	for (; i < len(str) / 2; i++)
	{
		char temp = str[i];

		str[i] = str[(len(str) - 1) - i];
		str[(len(str) - 1) - i] = temp;
	}
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
