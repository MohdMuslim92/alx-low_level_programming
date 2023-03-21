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
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
