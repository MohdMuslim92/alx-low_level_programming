#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free function
 * DESCRIPTION: a function that frees a doubly linked list
 * @head: pointer to the first node passed to the function
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	dlistint_t *next;

	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}
}
