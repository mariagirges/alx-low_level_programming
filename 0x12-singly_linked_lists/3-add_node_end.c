#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to linked list
 * @str: string
 * Return: he address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *ptr = *head;
	unsigned int length = 0;

	while (str[length])
		length++;
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->str = strdup(str);
	temp->len = length;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = temp;
	return (temp);
}
