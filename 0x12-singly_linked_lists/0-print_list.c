#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print function
 * DESCRIPTION: a function that prints a linked list
 * @h: pointer passed to the function
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	const list_t *node = h;
	size_t count = 0;

	if (node == NULL)
	{
		printf("[0] (nil)");
		return (1);
	}
	while (node != NULL)
	{
		printf("[%u] %s\n", node->len, node->str);
		node = node->next;
		count++;
	}

	return (count);
}
