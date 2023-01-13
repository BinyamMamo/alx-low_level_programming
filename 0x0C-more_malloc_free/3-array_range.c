#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an integer array in the range of two numbers
 * @min: minimum range
 * @max: maximum range
 *
 * Return: the created array
 */
int *array_range(int min, int max)
{
	int size, *mem, i;

	if (min > max)
		return (NULL);

	size = max - min;

	if (size < 0)
		size *= -1;
	size++;

	mem = malloc(sizeof(*mem) * size);
	if (mem == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		mem[i] = i;
	return (mem);
}
