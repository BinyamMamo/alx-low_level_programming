/**
 * str_utils - contains all string manipulation functions needed in this project
 *
 * Description: contains _strcpy function for copying a string and _strcat for
 *							concatenating two strings
 */

#include "str.h"
#include <stdlib.h>

/**
 * _strcpy - copies a string to a different memory location
 * @src: the source of the string to copy
 * @cpy: the copied string
 *
 * Return: nothing
 */
void _strcpy(char *src, char *cpy) //! including `malloc` in this code might come not so handy when trying to free it latter. so it has been removed.
{
	if (src) /* if the source is not null*/
		while (*src)
			*cpy = *src, src++, cpy++;
	*cpy = 0;
}

/**
 * _strcat - concatenates two strings
 * @str: the original string
 * @cat: the string to concatenate
 *
 * Return: the concatenated string
 */
char *_strcat(char *str, char *cat)
{
	char *str_cat = NULL;

	str_cat = malloc(sizeof(char) * (_strlen(str) + _strlen(cat) + 1));

	_strcpy(str, str_cat);
	_strcpy(cat, str_cat + _strlen(str)); /* move str_cat by the length of str and copy the string to be catenated*/
	str_cat[_strlen(str) + _strlen(cat)] = 0;

	return (str_cat);
}
