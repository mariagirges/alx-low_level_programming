#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc -  allocates memory
 * @nmemb: number of elements
 * @size: size of memory
 * Return: pointer to the allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i, b;

	b = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);
	a = malloc(b);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < (b); i++)
	{
		a[i] = 0;
	}
	return (a);
}
