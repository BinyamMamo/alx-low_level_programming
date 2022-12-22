#include <stdio.h>
char repl(char c);

/**
 * rot13 - rot13
 * @str: first input
 * Return: char
 */
char *rot13(char *str)
{
	int i = 0;

	for (; str[i] != 0; ++i)
	{
		str[i] = repl(str[i]);
	}

	return (str);
}

/**
 * repl - repl
 * @c: first input
 * Return: char
 */
char repl(char c)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int i = 0;

	for (; letters[i] != 0; i++)
	{
		if (letters[i] == c)
		{
			c = rot[i];
			break;
		}
	}

	return (c);
}
