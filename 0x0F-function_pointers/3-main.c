#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the program
 * @argc: first input
 * @argv: second input
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);

	func = get_op_func(argv[2]);
	if (argc != 4 || argv == NULL)
	{
		printf("Error\n");
		exit(98);
		return (1);
	}
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
		return (1);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
		return (1);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
