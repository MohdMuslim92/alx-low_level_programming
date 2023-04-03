#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * size_t print_listint - print function
 * DESCRIPTION: a function that prints a linked list
 * @h: pointer passed to the function
 * Return: number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}

	return (count);
}
