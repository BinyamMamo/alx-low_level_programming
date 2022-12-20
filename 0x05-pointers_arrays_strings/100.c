#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * _atoi - parses integer from a string
 * @s: string to be converted to integer
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int k = 1;
	int num = 0;
	int sign = 1;

	while ((s[i] < 48 || s[i] > 57) && s[i] != 0)
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
		{
			k = 0;
			if (((num * 10) + (s[i] - 49)) == INT_MAX)
			{
				num = INT_MIN;
				break;
			}
			else
			{
				num = (num * 10) + (s[i] - 48);
			}
		}
		if ((s[i] < 48 || s[i] > 57) && k == 0)
			break;
		i++;
	}
	if (num == INT_MIN)
		return (INT_MIN);
	return (num * sign);
}
