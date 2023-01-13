#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a checked or verified malloc function
 * @b: the number of bytes to allocate
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
