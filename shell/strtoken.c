#include <stdio.h>

char *strtoken(char *str, char delim);

/**
 * main - Entry point of the program
 *
 * Return: always 0
 */
int main(void)
{
	char str[] = "Hi how are you";

	printf("This is the string: %s\n", str);
	printf("and this is the token: %s\n", strtoken(str, ' '));
	printf("and this is another token: %s\n", strtoken(NULL, ' '));
	printf("and this is another token: %s\n", strtoken(NULL, ' '));
	printf("and this is another token: %s\n", strtoken(NULL, ' '));
	printf("and this is another token: %s\n", strtoken(NULL, ' '));

	return (0);
}

char *strtoken(char *str, char delim)
{
	char *token;
	static char *sptr = NULL;

	if (str != NULL)
	{
		while (*str == delim)
			str++;
		sptr = str;
	}

	if (*sptr == 0)
		return (NULL);

	token = sptr;

	while (*sptr != 0)
	{
		if (*sptr == delim)
			*sptr = 0;
		else
			sptr++;
	}

	sptr++;
	printf("\t => %s\n", sptr);

	return (token);
}
