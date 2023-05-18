#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete function
 * DESCRIPTION: a function that deletes a node
 *				at specific index of a doubly linked list
 * @head: pointer to the first node passed to the function
 * @index: the index of the node to be deleted
 * Return: address of the new node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *prev;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (node->next != NULL)
			node->next->prev = NULL;
		free(node);
		return (1);
	}
	while (node && i < index)
	{
		prev = node;
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (-1);
	prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = prev;
	free(node);
	return (1);
}

