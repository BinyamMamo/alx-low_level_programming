#include <stdio.h>
#include "main.h"

/**
 * _puts - prints string
 * @str: string to print
 * Return: nothing
 */

int _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; ++i)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

/**
 * _puts - prints string
 * @str: string to print
 * Return: nothing
 */

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
