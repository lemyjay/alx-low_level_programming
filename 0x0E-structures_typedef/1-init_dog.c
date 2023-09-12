#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initializes a variable of type struct dog.
 *
 * @d: a pointer that points to an object of type struct dog.
 * @name: a pointer to the memory address with the name of the dog
 * @age: holds the age of the dog
 * @owner: a pointer to a place in memory with the name of the owner
 * Returns void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
