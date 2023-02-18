#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _num_of_delims(char *str, char delim);
char **strtoarray(char *str, char delim);

/**
 * main - Entry point of the program
 *
 * Return: nothing
 */
int main(void)
{
	int i = 0;
	char *str = "Hi everyone how are you?";
	// char *token;

	char **array = NULL, **temp = NULL;

	printf("started...\n");
	array = strtoarray(str, ' ');
	printf("finished !!!\n");

	while (array[i])
	{
		printf("tokens: %s\n", array[i]);
		i++;
	}

	i = 0;
	// while (array[i])
	// {
	// 	// temp = array + 1;
	// 	free(array[i]);
	// 	array[i] = NULL;
	// 	// array = temp;
	// 	i++;
	// }

	free(*array);
	free(array);
	return (0);
}

char **strtoarray(char *str, char delim)
{
	char *token, *sptr, **array;
	int c = 0;

	printf("entered function\n");
	if (str == NULL || *str == 0)
		return (NULL);
	printf("=> here...\n");
	while (*str == delim)
		str++;
	sptr = malloc(sizeof(char) * (strlen(str) + 1));
	printf("length of sptr: %d\n", strlen(str) + 1);
	if (sptr == NULL)
		return (NULL);
	sptr = strdup(str);
	token = sptr;

	c = _num_of_delims(sptr, delim);

	if (c == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (c + 1));
	printf("length of array: %d\n", c + 1);
	c = 0;
	while (*sptr)
	{
		if (*sptr == delim)
		{
			*sptr = 0;
			array[c] = token;
			token = ++sptr;
			c++;
		}

		sptr++;
	}
	array[c] = token;
	array[c + 1] = NULL;

	return (array);
}

int _num_of_delims(char *str, char delim)
{
	int i = 0, c = 0;

	while (str[i] != 0)
	{
		if (str[i] == delim)
			c++;
		i++;
	}

	return (c);
}
