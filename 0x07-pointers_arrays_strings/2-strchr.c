#include <stdio.h>

/**
 * _strchr - strchr
 * @s: string
 * @c: char
 *
 * Return: occurence
 */

char *_strchr(char *s, char c)
{
	int i = 0, state = 0;

	if (s == NULL)
		return (NULL);

	while (s[i])
	{
		if (s[i] == c)
		{
			state = 1;
			break;
		}
		i++;
	}
	if (state)
		return (&s[i]);
	return (NULL);
}
