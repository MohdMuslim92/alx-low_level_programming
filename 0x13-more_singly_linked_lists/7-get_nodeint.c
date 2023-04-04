#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get node by index function
 * DESCRIPTION: a function that returns the nth node
 * of a listint_t linked list
 * @head: pointer to first node passed to the function
 * @n: index of the node
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
