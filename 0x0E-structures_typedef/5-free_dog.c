#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free memory function
 * DESCRIPTION: a function that free a memory
 * of a structure
 * @d: structure passed to the array
 * RETURN: 0 for success
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
