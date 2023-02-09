#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - custom calloc function
 * @nmemb: number of elements of the array
 * @size: the sizeof each element
 *
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		mem[i] = 0;
	}
	return ((void *)mem);
}
