#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_listint_safe - print function
 * DESCRIPTION: a function that prints a listint_t
 * linked list with a while loop
 * @head: pointer to node passed to the function
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *node, *temp;

	node = head;
	while (node != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)node, node->n);
		temp = node;
		node = node->next;
		if (temp < node)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			exit(98);
		}
	}
	return (count);
}
