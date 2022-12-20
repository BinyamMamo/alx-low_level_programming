#include <stdio.h>
#include "main.h"

/**
 * _atoi - parses integer from a string
 * @s: string to be converted to integer
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int num = 0;
	int sign = 1;

	while (s[i] != 0)
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] > 47 && s[i] < 58)
			num = (num * 10) + s[i] - 48;
		i++;
	}

	return (num * sign);
}
