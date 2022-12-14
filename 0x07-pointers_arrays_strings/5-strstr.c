#include <stdio.h>

/**
 * _strstr - _strstr
 * @haystack: first input
 * @needle: second input
 *
 * Return: pointer to string
 */
char *_strstr(char *haystack, char *needle)
{
	int index, i, j, state;

	index = -1;
	i = 0;
	while (haystack[i] != 0)
	{
		j = 0;
		state = 0;

		for (; needle[j] != 0; j++)
		{
			if (haystack[i + j] == needle[j])
			{
				state++;
			}
		}
		if (state == j)
		{
			index = i;
			break;
		}
		i++;
	}
	if (index == -1)
		return (NULL);
	return (&haystack[index]);
}
