#include "main.h"

/**
 * print_binary - print binary
 * @n: first input
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = 0; i < 32; i++)
		_putchar(48 + get_bit(n, i));
}

/**
 * get_bit - get bit at any index
 * @n: first input
 * @index: second input
 *
 * Return: the bit at the specified index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (index >= 32 ? -1 : n && (n & (1 << index)));
}
