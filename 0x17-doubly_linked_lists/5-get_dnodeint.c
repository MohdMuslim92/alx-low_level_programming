#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - retrieve function
 * DESCRIPTION: a function that gets a node
 *				at a specifi index of a doubly
 *				linked list
 * @head: pointer to the first node passed to the function
 * @index: the index of the node to be retrieved
 * Return: address of the retrieved node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);

}
