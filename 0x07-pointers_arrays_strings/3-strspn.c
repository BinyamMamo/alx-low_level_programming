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

	for (; accept[j] != 0; j++)
	{
		i = 0;

		while (s[i] != 0)
		{
			if (s[i] == accept[j])
			{
				if (i > index)
					index = i;
				break;
			}

			i++;
		}
	}

	return (index + 1);
}
