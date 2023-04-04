#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - add node function
 * DESCRIPTION: a function that add a new node
 * at the end of a linked list
 * @head: pointer to node passed to the function
 * @n: node value passed to the function
 * Return: a pointer to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *last;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	} else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = node;
	}
	return (node);
}
