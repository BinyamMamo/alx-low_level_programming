#include "main.h"

/**
 * print_binary - print binary
 * @n: first input
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar(48 + (n & 1));
}