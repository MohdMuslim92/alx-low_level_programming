#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * pop_listint - remove node function
 * DESCRIPTION: a function that delete the first
 * node in a linked list
 * @head: pointer to first node passed to the function
 * Return: first node value
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
