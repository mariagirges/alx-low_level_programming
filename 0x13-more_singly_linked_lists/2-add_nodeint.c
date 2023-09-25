#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head: head of linked list
 * @n: value of new node
 * Return: the address of the new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
