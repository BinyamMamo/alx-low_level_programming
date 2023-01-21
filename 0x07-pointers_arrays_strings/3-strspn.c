#include <stdio.h>

/**
* _strspn - _strspn
* @s: first input
* @accept: second input
*
* Return: pointer to string
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, i, j;

	index = 0;
	j = 0;
	while (accept[j] != 0)
	{
		i = 0;
		for (; s[i] != 0; i++)
		{
			if (accept[j] == s[i])
			{
				if (i >= index)
				index = i;
				break;
			}
		}
		j++;
	}
	if (index == 0)
		return (0);
	return (index + 1);
}
