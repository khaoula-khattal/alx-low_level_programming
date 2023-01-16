#include <stdio.h>
#include "dog.h"

/**
 * print_dog - struct dog
 * @d: pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != Null)
			printf("Name: %\n", d->name);
		else
			printf("name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
