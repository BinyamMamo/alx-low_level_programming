#include <string.h>
#include <stdlib.h>
#include "dog.h"

dog_t d;

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

	d.name = malloc(sizeof(char) * (strlen(name) + 1));
	if (d.name == NULL)
		return (NULL);
	strcpy(d.name, name);
	d.age = age;
	d.owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (d.owner == NULL)
		return (NULL);
	strcpy(d.owner, owner);

	return (&d);
}