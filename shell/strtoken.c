#include <stdio.h>

char *delimstr(char *str, char *delim);
char *strtoken(char *str, char *delim);

/**
 * main - Entry point of the program
 *
 * Return: always 0
 */
int main(void)
{
	char *token;
	char str[] = "Hi how are you";

	printf("This is the string: %s\n\n", str);
	printf("and this is the token: %s\n", strtoken(str, " "));

	token = strtoken(NULL, " ");
	while (token)
	{
		printf("and this is another token: %s\n", token);
		token = strtoken(NULL, " ");
	}

	return (0);
}

char *strtoken(char *str, char *delim)
{
	char *token, *temp;
	static char *sptr = NULL;

	if (str != NULL)
	{
		while (*str == *delim)
		{
			if (delimstr(str, delim) == NULL)
				break;
			str = delimstr(str, delim);
		}

		sptr = str;
	}

	if (*sptr == 0)
		return (NULL);

	token = sptr;

	while (*sptr != 0)
	{
		if (*sptr == *delim)
		{
			if (delimstr(sptr, delim) != NULL)
			{
				temp = sptr;
				sptr = delimstr(sptr, delim);
				*temp = 0;
				break;
			}
		}
		else
			sptr++;
	}

	// sptr++;
	// printf("\t => %s\n", sptr);

	return (token);
}

char *delimstr(char *str, char *delim)
{
	int i, state;

	state = 1;
	for (i = 0; delim[i]; i++)
	{
		if (str[i] != delim[i])
		{
			state = 0;
			break;
		}
	}
	if (state)
		return (&str[i]);

	return (NULL);
}
