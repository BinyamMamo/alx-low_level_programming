#include <stdio.h>

int len(char *str);
int pass(char *, int, int);

/**
 * is_palindrome - is_palindrome
 * @s: first input
 *
 * Return: palindrome
 */
int is_palindrome(char *s)
{
	return (pass(s, (len(s) - 1)/2, 0));
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

int pass(char *str, int c, int x)
{

	if (str[c + x] == str[c - x])
	{
		x = pass(str, c, x++);
		return (x);
	}
	return (0);
}