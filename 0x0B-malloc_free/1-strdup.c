#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - returns a pointer to a new string 
 * which is a duplicate of the string @str
 * @str: string to duplicate 
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, size;

	i = 0;
	size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size])
			size++;
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (ptr[i] = str[i] != '\0')
		i++;
	return (ptr);
}



	
