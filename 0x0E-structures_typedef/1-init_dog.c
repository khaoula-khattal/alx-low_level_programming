#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a structure
 * @d: pointer
 * @name: name
 * @age: the age
 * @owner: the owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
