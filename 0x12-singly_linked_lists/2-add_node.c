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
list_t *ptr;
	unsigned int length = 0;

	while (str[length])
		length++;
	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = length;
	ptr->next = (*head);
	(*head) = ptr;
	return (*head);
}
