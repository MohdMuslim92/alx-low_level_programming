#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - sum function
 * DESCRIPTION: a function that adds nodes'
 *				values of a doubly linked list
 *				and return the sum
 * @head: pointer passed to the function
 * Return: the of the nodes' values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
