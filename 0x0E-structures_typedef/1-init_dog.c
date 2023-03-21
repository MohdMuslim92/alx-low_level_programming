#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializing function
 * DESCRIPTION: a function that initialize a structure
 * @d: structure passed to the array
 * @name: name
 * @age: age
 * @owner: owner
 * RETURN: 0 for success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
