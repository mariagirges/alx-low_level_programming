#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *get_nodeint_at_index - eturns the nth node of a listint_t linked list.
 * @head: head of linked list
 * @index: index of the node, starting at 0
 * Return: the nth node of a listint_t linked list or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *new = head;

	while (new && n < index)
	{
		new = new->next;
		n++;
	}
	return (new ? new : NULL);
}
