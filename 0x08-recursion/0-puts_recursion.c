#include "main.h"

/**
* _puts_recursion - _puts_recursion
* @s: first input
*
* Return: nothing
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
		_putchar(*s);
	else
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
}
