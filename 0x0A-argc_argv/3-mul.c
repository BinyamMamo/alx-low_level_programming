#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: argument count
 * @argv: argument array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", (argv[1] - 48) * (argv[2] - 48));
	else
	{
		printf("error");
		return (1);
	}
	return (0);
}
