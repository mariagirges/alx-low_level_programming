#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
