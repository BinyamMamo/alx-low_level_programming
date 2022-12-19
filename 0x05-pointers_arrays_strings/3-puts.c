#include <stdio.h>
#include "main.h"

/**
 * _puts - prints string
 * @str: string to print
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; ++i)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
