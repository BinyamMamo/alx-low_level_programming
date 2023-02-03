#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_binary(0);
	printf(" => 0\n");
	print_binary(7);
	printf(" => 7\n");
	print_binary(98);
	printf(" => 98\n");
	print_binary(1024);
	printf(" => 1024\n");
	print_binary((1 << 10) + 1);
	printf(" => %u\n", (1 << 10) + 1);
	return (0);
}
