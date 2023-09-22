#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "lists.h"
/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: head of linked list
 * @str: string
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t length;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	for (length = 0; str[length]; length++)
		;
	new->len = length;
	new->next = *head;
	*head = new;

	return (*head);
}
