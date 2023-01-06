#include <stdio.h>

char prime(char *str, int x);

/**
* prime - prime
* @str: first input
* @x: second input
* Return: number of factors
*/
char prime(char *str, int x)
{
	int i;

	i = 0;
	if (*str == 0)
	{
		return (*(str - x));
	}
	i = prime(str + 1, x);

	return (i);
}

/**
* is_palindrome - is_palindrome
* @s: first input
*
* Return: palindrome
*/
int is_palindrome(char *s)
{
	int i;
	char c;

	i = 0;
	if (*s != 0)
	{
		i = is_palindrome(s + 1) + 1;
		c = prime(s, i);
		if (*s != c)
			return (-1);
	}
	return (i);
}
