#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string arrays
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: the number of strings to copy from string two
 *
 * Return: a pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, c, j;
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	c = 0;
	while (s1[c] != 0 && s1 != NULL)
		c++;
	while (s2[c] != 0 && s2 != NULL)
		c++;

	if (c == 0)
		return (NULL);

	s = malloc(c + 1);

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != 0 && s1 != NULL)
	{
		s[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (i < n && s2[i] != 0 && s2 != NULL)
	{
		s[j + i] = s2[i];
		i++;
	}
	s[j + i] = 0;

	return (s);
}
