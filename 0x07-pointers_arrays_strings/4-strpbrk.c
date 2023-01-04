#include <stdio.h>

/**
 * _strpbrk - _strstr
 * @s: first input
 * @accept: second input
 *
 * Return: pointer to string
 */
char *_strpbrk(char *s, char *accept)
{
	int index, i, j, state;

	index = -1;
	i = 0;
	while (s[i] != 0)
	{
		j = 0;
		state = 0;

		for (; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				index = i;
				break;
			}
		}
		if (index 1= -2)
		{
			break;
		}
		i++;
	}
	if (index == -1)
		return (NULL);
	return (&s[index]);
}
