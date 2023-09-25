#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of linked list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	new = *head;
	*head = new->next;
	n = new->n;
	free(new);
	return (n);
}
