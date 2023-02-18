#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char **strtoarray(char *str, char delim);

char *strtoken(char *str, char delim);

/**
 * main - Entry point of the program
 *
 * Return: nothing
 */
int main(void)
{
	char delim = ' ';
	char *str = "Hi how are you?";
	char *token;
	// char **array;
	token = strtoken(str, delim);
	while (token)
	{
		printf("%s\n", token);
		token = strtoken(NULL, delim);
	}

	// array = strtoarray(str, ' ');

	// while (*array)
	// {
	// 	printf("Token: %s\n", array);
	// 	array++;
	// }

	return (0);
}

// char **strtoarray(char *str, char delim)
// {
// 	int i = 0;
// 	char *token;
// 	char **array;

// 	array = malloc(sizeof(char *));
// 	i++;

// 	token = strtoken(str, delim);
// 	while (token)
// 	{
// 		array[i - 1] = token;
// 		i++;
// 		token = strtoken(NULL, delim);
// 		array = realloc(array, sizeof(char *) * i);
// 	}

// 	array[i - 1] = NULL;

// 	return (array);
// }

char *strtoken(char *str, char delim)
{
	char *token;
	static char *sptr = NULL;

	if (str != NULL)
	{
		while (*str == delim)
			str++;
		sptr = malloc(strlen(str));
		sptr[strlen(str)] == 0;
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
	// printf("\t => %s\n", sptr);
	return (token);
}
