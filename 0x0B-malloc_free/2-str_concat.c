#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two string arrays
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, c = 0, j = 0;
	char *s;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	s1 = (s1 == NULL) ? &"" : s1;
	s2 = (s2 == NULL) ? &"" : s2;
	while (s1[c])
		c++;
	while (s2[c])
		c++;
	c++;

	s = malloc(c * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}

	j = i;
	i = 0;
	while (s2[i])
	{
		s[j + i] = s2[i];
		i++;
	}

	s[j + i] = 0;
	return (s);
}
