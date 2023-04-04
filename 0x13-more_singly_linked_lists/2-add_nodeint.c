#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - add node function
 * DESCRIPTION: a function that add a new node
 * at the first of a linked list
 * @head: pointer to node passed to the function
 * @n: node value passed to the function
 * Return: a pointer to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
