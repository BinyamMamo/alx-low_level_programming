#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - custom made realloc function
 * @ptr: the address of the dynamic memory to realloc
 * @old_size: previuous size
 * @new_size: new size
 * Return: void pointer to the realloced address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	mem = malloc(new_size);
	if (mem == NULL)
		return (NULL);
	return (mem);
}
