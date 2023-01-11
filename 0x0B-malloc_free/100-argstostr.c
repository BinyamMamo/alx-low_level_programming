#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - converts arguments to str
 * @ac: argument count
 * @av: argument list
 *
 * Return: the concatenated arguments
 */

char *argstostr(int ac, char **av)
{
	char *str, *s, *f;
	int i, c, j;

	if (ac == 0 || av == NULL)
	{
		f = "Failed\n";
		str = malloc((sizeof(char) * 8));
		for (i = 0; i < 8; i++)
			str[i] = f[i];
		str[i] = '\0';
		return (str);
	}
	c = 0;
	for (i = 0; i < ac; i++)
	{
		s = av[i];
		for (j = 0; s[j] != 0; j++)
			c++;
		c++;
	}
	str = malloc((sizeof(char) * c) + 1);
	if (str == NULL)
		return (NULL);
	c = 0;
	for (i = 0; i < ac; i++)
	{
		s = av[i];
		for (j = 0; s[j] != 0; j++)
		{
			str[c] = s[j];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	str[c] = '\0';
	return (str);
}
