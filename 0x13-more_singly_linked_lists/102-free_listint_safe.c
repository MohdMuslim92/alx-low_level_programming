#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint_safe - free allocated function
 * DESCRIPTION: a function that frees a listint_t list
 * @h: pointer to node passed to the function
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *node, *temp;

	if (h == NULL || *h == NULL)
		return (0);
	node = *h;
	while (node != NULL)
	{
		i++;
		if (node <= node->next)
		{
			*h = NULL;
			exit(98);
		}
		temp = node->next;
		free(node);
		node = temp;
	}
	*h = NULL;
	return (i);
}
