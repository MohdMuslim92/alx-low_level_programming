#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print function
 * DESCRIPTION: a function that prints a structure
 * @d: structure passed to the array
 * RETURN: 0 for success
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}
	if (d->name == NULL)
		printf("Name: (nil)");
	else
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
	printf("Owner: %s\n", d->owner);
}
