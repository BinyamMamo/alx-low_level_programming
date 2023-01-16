#ifndef DOG_H
#define DOG_H
/**
 * struct dog - creates a dog object
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: creates a dog object with his name, his age and owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
