#include <stdlib.h>
#include <string.h>
#include "dog.h"

int _strlen(char *str);

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

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	d = malloc(sizeof(*d));
	d->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(d->owner, owner);

	return (d);
}

/**
 * _strlen - finds the length of a string
 * @str: a character array to store the input
 *
 * Return: the length of str
 */
int _strlen(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}
