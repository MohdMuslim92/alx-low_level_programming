#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocate memory
 * @b: The size of memory to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = (int *) malloc(1 * sizeof(b));
	if (b == INT_MAX)
	{
		exit (98);
	} else
	{
			arr[0] = b;
		return (arr);
	}
}

