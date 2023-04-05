#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * find_listint_loop - detect loop function
 * DESCRIPTION: a function that finds the loop in a linked list
 * @head: pointer to node passed to the function
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node, *next;

	if (head == NULL || head->next == NULL)
		return (NULL);
	node = head->next;
	next = head->next->next;
	while (next != NULL && next->next)
	{
		if (node == next)
		{
			node = head;
			while (node != next)
			{
				node = node->next;
				next = next->next;
			}
			return (node);
		}
		node = node->next;
		next = next->next->next;
	}
	return (NULL);
}
