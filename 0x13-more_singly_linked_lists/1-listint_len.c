#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - get length function
 * DESCRIPTION: a function that counts number of
 * elements in a linked list
 * @h: pointer passed to the function
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		node = node->next;
		count++;
	}

	return (count);
}

