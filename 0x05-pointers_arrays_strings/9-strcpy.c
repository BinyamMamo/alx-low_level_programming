#include <stdio.h>

int len(char *str);

/**
 * *_strcpy - copies string
 * @dest: a string to store the copied string
 * @src: string to copy
 * Return: the copied string(dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; i < len(src); ++i)
	{
		dest[i] = src[i];
	}
	dest[len(src)] = '\0';
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
