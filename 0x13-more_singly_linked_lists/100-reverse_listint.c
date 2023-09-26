#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *reverse_listint - reverses a listint_t linked list.
 * @head: head of linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	prev = NULL;
	next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
