/**
* wildcmp - wildcmp
* @s1: first input
* @s2: second input
* Return: pointer
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '*' && *s2 == '*')
	{
		return (wildcmp(s1, s2));
	}

	else if (*s1 == '*' && *s2 != '*')
	{
		if (*s2 != 0 && *s1 != '*')
			return (wildcmp(s1, s2 + 1));
	}

	else if (*s2 == '*')
	{
		if (*s1 != 0)
			return (wildcmp(s1 + 1, s2));
	}

	else if (*s1 == *s2)
	{
		if (*s1 != 0 && *s2 != 0)
			return (wildcmp(s1 + 1, s2 + 1));
	}
	else
		return (0);

	return (1);
}
