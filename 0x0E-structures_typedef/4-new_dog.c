#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: the dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(*d));
	d->name = malloc(sizeof(char) * (strlen(name)));
	if (d->name == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = malloc(sizeof(char) * (strlen(owner)));
	if (d->owner == NULL)
		return (NULL);
	d->owner = owner;

	return (d);
}
