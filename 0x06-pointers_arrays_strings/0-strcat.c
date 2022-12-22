#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the destination of the concatenated string
 * @src: the source of the string to concatenate
 * Return: a string of characters
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != 0)
	{
		i++;
	}

	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;

	return (dest);
}
