#include "main.h"
#include <stdio.h>

/**
 * get_bit - get bit at any specified index
 * @n: first input
 * @index: second input
 *
 * Return: the bit at the specified index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (index >= 32 ? -1 : n && (n & (1 << index)));
}
