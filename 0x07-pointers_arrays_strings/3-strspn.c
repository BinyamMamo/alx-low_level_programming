#include <stdio.h>

/**
 * _strspn - _strspn
 * @s: first input
 * @accept: second input
 *
 * Return: pointer to string
 */
char *_strspn(char *s, char *accept)
{
	unsigned int index, i, j;

	index = 0;
	i = 0;
	while (s[i] != 0)
	{
		j = 0;

		for (; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				index = i;
				break;
			}
		}
		if (index != -1)
		{
			break;
		}
		i++;
	}
	return (index);
}
