#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strtoken(char *str, char delim);

/**
 * main - Entry point of the program
 *
 * Return: nothing
 */
int main(void)
{
	char *str = "Hi everyone how are you?";
	char *token;

	token = strtoken(str, ' ');
	while (token)
	{
		printf("token: %s\n", token);
		token = strtoken(NULL, ' ');
	}

	return (0);
}

char *strtoken(char *str, char delim)
{
	char *token;
	static char *sptr;

	if (str != NULL)
	{
		while (*str == delim)
			str++;
		sptr = malloc((sizeof(char) * strlen(str)) + 1);
		if (sptr == NULL)
			return (NULL);
		sptr = strdup(str);
	}

	if (*sptr == 0)
		token = NULL;
	else
		token = sptr;

	while (*sptr)
	{
		if (*sptr == delim)
		{
			*sptr = 0;
			sptr++;
			break;
		}
		else
		{
			sptr++;
		}
	}

	return (token);
}
