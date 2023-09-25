#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head of linked list
 * @n: value of data in node
 * Return: the address of the new element, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *curs;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (*head)
	{
		curs = *head;
		while (curs->next != NULL)
			curs = curs->next;
		curs->next = new;
	}
	else
		*head = new;
	return (new);
}
