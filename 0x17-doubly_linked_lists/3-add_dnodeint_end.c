#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - node add function
 * DESCRIPTION: a function that adds a new
 *				node at the end of a doubly
 *				linked list
 * @head: pointer passed to the function
 * @n: the node data
 * Return: address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *last;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	} else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = node;
		node->prev = last;
	}
	return (node);
}
