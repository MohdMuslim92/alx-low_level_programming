#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive binary search function.
 * @array: Pointer to the first element of the array to search in.
 * @low: Index of the low end of the subarray.
 * @high: Index of the high end of the subarray.
 * @value: Value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
*/
int advanced_binary_recursive(int *array, int low, int high, int value)
{
	int i, mid;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		mid = (low + high) / 2;

		if (array[mid] == value)
		{
			if (mid == low || array[mid - 1] != value)
				return (mid);
			else
				return (advanced_binary_recursive(array, low, mid, value));
		}

		if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, high, value));
		else
			return (advanced_binary_recursive(array, low, mid - 1, value));
	}

	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *					 using the Advanced Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, (int)size - 1, value));
}
