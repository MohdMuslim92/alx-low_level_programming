#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers
 *				using the Jump search algorithm.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in list.
 * @value: Value to search for.
 *
 * Return: A pointer to the first node where value is located, or
 *			NULL if not found.
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step, prev_index, i;
	listint_t *current;

	if (list == NULL || size == 0)
		return (NULL);

	jump_step = sqrt(size);
	prev_index = 0;
	current = list;

	while (current->next != NULL && current->n < value)
	{
		printf(
				"Value checked at index [%lu] = [%d]\n",
				current->index, current->n);

		prev_index = current->index;
		for (i = 0; i < jump_step && current->next != NULL; i++)
			current = current->next;

		if (current->n >= value)
			break;
	}

	printf(
			"Value found between indexes [%lu] and [%lu]\n",
			prev_index, current->index);

	current = list;
	while (current != NULL && current->n < value)
	{
		printf(
				"Value checked at index [%lu] = [%d]\n",
				current->index, current->n);
		current = current->next;
	}
	if (current != NULL && current->n == value)
		return (current);

	return (NULL);
}
