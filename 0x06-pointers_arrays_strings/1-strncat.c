#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: the destination of the concatenated string
 * @src: the source of the string to concatenate
 * Return: a string of characters
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != 0)
	{
		i++;
	}

	while (j < n && src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}
