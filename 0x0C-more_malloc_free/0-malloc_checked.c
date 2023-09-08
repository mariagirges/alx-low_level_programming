#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory
 * @b: count bytes
 * Returns: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);

	return (str);
}
