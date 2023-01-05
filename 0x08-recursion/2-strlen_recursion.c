/**
* _strlen_recursion - _strlen_recursion
* @s: first input
*
* Return: length of string
*/
int _strlen_recursion(char *s)
{
	int c;

	c = 0;
	if (*s != '\0')
		c = _strlen_recursion(s + 1) + 1;

	return c;
}
