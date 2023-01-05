#include "main.h"

int len(char *s);

/**
* _print_rev_recursion - _print_rev_recursion
* @s: first input
* Return: nothing
*/
void _print_rev_recursion(char *s)
{
	_putchar(*(s + len(s) - 1));
	if (len(s) > 1)
		_print_rev_recursion(s + len(s) - 1);
}

/**
* len - _strlen_recursion
* @s: first input
*
* Return: length of string
*/
int len(char *s)
{
	int c;

	c = 0;
	if (*s != '\0')
		c = len(s + 1) + 1;

	return (c);
}
