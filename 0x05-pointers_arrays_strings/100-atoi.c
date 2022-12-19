#include <stdio.h>

int pw(int, int);
/**
 * pw - finds the power of n to p
 * @n: base number
 * @p: power
 * Return: n to the power of p
 */
int pw(int n, int  p)
{
	int j = 0;
	int r = 1;

	for (; j < p; j++)
	{
		r = r * n;
	}
	return (r);
}


/**
 * _atoi - parses integer from a string
 * @s: string to be converted to integer
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0;

	while (s[c] != '\0')
	{
		i++;
	}

	i--;

	int num = 0;
	int k = 0;

	for (; i >= 0; --i)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			int n = s[i] - 48;

			num = num + (n * pw(10, k));
			k++;
		}
		else if (num != 0 && s[i] != ' ' && s[i] != '-' && s[i] != '+')
		{
			num = 0;
			k = 0;
		}
		if (s[i] == '-' && num != 0)
		{
			num = num * -1;
		}
	}
	return (num);
}
