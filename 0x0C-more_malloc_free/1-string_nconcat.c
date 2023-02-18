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
	const char ch = 0;
	char *s = NULL;

	if (s1 == NULL)
		s1 = &ch;
	if (s2 == NULL)
		s2 = &ch;
	c = 0;
	while (s1[c] != 0)
		c++;
	i = 0;
	while (i < n && s2[c] != 0)
	{
		i++;
		c++;
	}
	c++;
	s = malloc(c * sizeof(char));
	if (s == NULL)
		return (NULL);

	if (c == 0)
	{
		s[0] = 0;
		return (s);
	}
	i = 0;
	while (s1[i] != 0)
	{
		s[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (i < n && s2[i] != 0)
	{
		s[j + i] = s2[i];
		i++;
	}
	s[j + i] = 0;

	return (s);
}
