#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - print function
 * DESCRIPTION: a function that prints a doubly linked list
 * @h: pointer passed to the function
 * Return: number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}

	return (count);
}
