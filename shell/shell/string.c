/**
 * str_utils - contains all string utility functions needed in this project
 *
 * Description: contains print function for string output, custom atoi function
 *							for string conversion, and strlen function to find the length of
 *							a string.
 */

#include "str.h"
#include <unistd.h>

/**
 * print - prints a string to the provided stream
 * @str: the string to print
 * @stream: the stream to print the string to
 *
 * Return: nothing
 */
void print(char *str, int stream)
{
	if (str)			 /* if the string is not null*/
		while (*str) /* loop through each character*/
		{
			write(stream, str, 1); /* and print them using `write()` from unistd.h*/
			str++;
		}
}

/**
 * atoi - converts string to integer
 * @str: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *str)
{
	int i = 0;

	if (!str || *str == '-' || *str == 0) /* avoid NULL and negative numbers*/ //! should I avoid negative numbers? AND should I return negative numbers on encountering empty string('\0')?(I think yes)
		return (-1);

	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			if (i > 0)
				break;
			else
				return (-1);
		}
		i *= 10;
		i += *str - 48;
		str++;
	}

	return (i);
}

/**
 * _strlen - finds the length of a string
 * @str: the string whose length is to be found
 *
 * Return: the string length
 */
int _strlen(char *str)
{
	int len = 0;

	if (str)
		while (*str)
			len++, str++;

	return (len);
}
