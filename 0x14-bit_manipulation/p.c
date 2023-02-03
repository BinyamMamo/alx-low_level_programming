#include "main.h"

/**
 * print_binary - print binary
 * @n: first input
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, state = 0;

	if (n == 0)
	{
		_putchar(0);
		return;
	}

	for (i = 63; i > 0; i--)
	{
		if (get_bit(n, i))
			state = ~state;
		if (state == 1)
			_putchar(48 + get_bit(n, i));
	}
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
	return (index >= 64 ? -1 : n && (n & (1 << index)));
}
