#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - node add function
 * DESCRIPTION: a function that adds a new
 *				node at the beginning of a
 *				doubly linked list
 * @head: pointer passed to the function
 * @n: the node data
 * Return: address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head != NULL)
		(*head)->prev = node;

	*head = node;

	return (node);
}
