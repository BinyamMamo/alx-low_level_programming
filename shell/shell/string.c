/**
 * str_utils - contains all string manipulation functions needed in this project
 *
 * Description: contains _strcpy function for copying a string and _strcat for
 *							concatenating two strings
 */

#include "str.h"
#include <stdlib.h>

/**
 * _strcmp - compares two strings
 * @str: the first string to compare
 * @cmp: another string to compare with the first string
 *
 * Return: 1 if similar 0 if not
 */
int _strcmp(char *str, char *cmp) //! might not work!!!. take care
{
	if (str == NULL && cmp == NULL)
		return (1);
	if (_strlen(str) != _strlen(cmp))
		return (0);
	while (*str)
	{
		if (*str != *cmp)
			return (0);
		str++, cmp++;
	}

	return (1);
}

/**
 * _strspn - Calculates the length of the initial segment of str1 which
 *						consists entirely of characters from str2.
 *
 * @str: The string to be searched.
 * @spn: The characters to search for in str1.
 *
 * Return: The number of characters in the initial segment of str1 that match
 *					any of the characters in str2.
 */
int _strspn(char *str, char *spn)
{
	int match = 0;

	while (*str)
	{
		if (!_strchr(spn, *str))
			break;
		match++, str++;
	}

	return (match);
}

int strcspn(char *str, char *spn)
{
	int len = 0;

	while (*str)
	{
		if (_strchr(spn, *str))
			break;
		len++, str++;
	}

	return (len);
}

char *_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}

	return (NULL);
}