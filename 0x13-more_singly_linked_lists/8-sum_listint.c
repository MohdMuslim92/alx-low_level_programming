#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * sum_listint - get node by index function
 * DESCRIPTION: a function that returns the sum
 * of all the data (n) of a listint_t linked list
 * @head: pointer to first node passed to the function
 * Return: pointer to the node
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
