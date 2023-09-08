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
	void *p;
	unsigned int i;
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		p = malloc(new_size);
		if (p != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)p + i) = *((char *) ptr + i);
			free(ptr);
			return (p);
		}
		else
			return (NULL);
	}
}
