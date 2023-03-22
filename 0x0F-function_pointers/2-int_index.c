#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - a search function
 * DESCRIPTION: a function that searches for an integer
 * @array: array of integers passed to the function
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * @: the number returned
 * Return: an int if the number found or -1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
