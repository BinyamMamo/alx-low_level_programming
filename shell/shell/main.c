#include <stdio.h>
#include "str.h"
#include <unistd.h>

int _strlen(char *str)
{
	int len = 0;

	if (str)
		while (*str)
			len++, str++;

	return (len);
}

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
 * main - Entry point of the program
 *
 * Return: nothing
 */
int main(void)
{
	printf("atoi: %d\n", _strlen("NULL"));
	print("hi", STDOUT_FILENO);
	return (0);
}
