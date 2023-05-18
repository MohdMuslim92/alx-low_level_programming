#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - length function
 * DESCRIPTION: a function that returns the length of a doubly linked list
 * @h: pointer passed to the function
 * Return: length of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		node = node->next;
		count++;
	}

	return (count);
}
