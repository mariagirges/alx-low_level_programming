#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: size that allocated
 * @new_size: size of new memory
 * Return: Pointer, NULL or ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *str;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));
	p = malloc(new_size);
	if (!p)
		return (NULL);
	str = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = str[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = str[i];
	}
	free(ptr);
	return (p);
}
