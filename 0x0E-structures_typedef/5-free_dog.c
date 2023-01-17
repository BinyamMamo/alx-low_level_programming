#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - cretes a free dog
 * @d: the dog to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
