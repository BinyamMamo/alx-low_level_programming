#include <stdio.h>
#include "main.h"

/**
* _print_rev_recursion - _puts_recursion
* @s: first input
*
* Return: nothing
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}


