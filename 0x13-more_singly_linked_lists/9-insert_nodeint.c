#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of linked list
 * @idx: index of the list
 * @n: value of new node
 * Return: the address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *node;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	node = *head;
	for (; i < idx - 1 && node != NULL; i++)
		node = node->next;
	if (node == NULL)
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = node->next;
	node->next = new;
	return (new);
}
