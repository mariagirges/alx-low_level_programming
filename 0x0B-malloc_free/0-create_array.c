#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  *create_array - creates an array of chars
 *  @size: size of array
 *  @c: initialize the array
 *  Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++
	}
	ptr[i] = '\0';
	return (ptr);
}



