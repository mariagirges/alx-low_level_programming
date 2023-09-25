#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: head of linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *start;

	if (head == NULL)
		return;
	while (*head)
	{
		start = (*head)->next;
		free(*head);
		*head = start;
	}
	*head = NULL;
}
