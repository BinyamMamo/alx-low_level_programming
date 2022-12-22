/*#include <stdio.h>
*/
int len(char *str);

/**
 * _strncpy - copies string
 * @dest: a string to store the copied string
 * @src: string to copy
 * Return: the copied string(dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n; ++i)
	{
		if(i > len(src))
			break;
		dest[i] = src[i];
	}

	for (; i < n; ++i)
		dest[i] = '\0';

	return (dest);
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
