void replace(char *str, char c, char t);

/**
 * leet - leet
 * @str: first input
 * Return: char
 */
char *leet(char *str)
{
	replace(str, 'a', '4');
	replace(str, 'e', '3');
	replace(str, 'l', '1');
	replace(str, 'o', '0');
	replace(str, 't', '7');

	return (str);
}

/**
 * replace - replace
 * @str: first input
 * @c: second input
 * @t: third input
 * Return: nothing
 */
void replace(char *str, char c, char t)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (str[i] == c || str[i] == c - 32)
			str[i] = t;
		i++;
	}
}
