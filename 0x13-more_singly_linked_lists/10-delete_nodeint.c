#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of linked list
 * @index: index of the node that should be deleted
 * Return: 1 or -1;
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *new, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	new = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (new->next == NULL)
			return (-1);
		new = new->next;
	}
	temp = new->next;
	new->next = temp->next;
	free(temp);
	return (1);
}
