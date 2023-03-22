#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - function execute a function
 * DESCRIPTION: a function that executes a function
 * given as a parameter on each element of an array
 * @array: array of integers passed to the function
 * @size: the array size
 * @action: pointer to the function we need to use
 * RETURN: 0 for success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
