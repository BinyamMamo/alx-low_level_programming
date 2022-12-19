/**
 * _strlen - finds the length of a string
 * @str: a character array to store the input
 * Return: the length of str
 */
int _strlen(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}
