#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: argument count
 * @argv: argument array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 0; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
