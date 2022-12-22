#include "main.h"
#include <stdio.h>

int contains(char *str, char c);

/**
 * cap_string - cap_string
 * @str: first input
 * Return: char
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;

		if (contains(" \t\n,;.!?\"(){}", str[i]))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z' && str[i + 1] != 0)
			{
				str[i + 1] -= 32;
			}
		}

		i++;
	}

	return (str);
}

/**
 * contains - contains
 * @str: first input
 * @c: second input
 * Return: integer
 */
int contains(char *str, char c)
{
	int i = 0;
	int cont = 0;

	while (str[i] != 0)
	{
		if (str[i] == c)
			cont = 1;
		i++;
	}
	return (cont);
}
