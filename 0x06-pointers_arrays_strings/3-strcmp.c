int len(char *str);

/**
 * _strcmp - compares strings
 * @s1: first input
 * @s2: second input
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int c = 0;
	int lower = (len(s1) > len(s2)) ? len(s2) : len(s1);

	for (; i <= lower; ++i)
	{
		c = s1[i] - s2[i];

		if (s1[i] != s2[i])
			break;
	}
	return (c);
}

/**
 * len - finds the length of string
 * @str: a character array to store the input
 * Return: the length of str
 */
int len(char *str)
{
	int c = 0;
	int i = 0;

	for (; str[i] != '\0'; ++i)
	{
		c++;
	}
	return (c);
}
