#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number evaluated
 * @index: is the index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int add;

	if (index > 64)
		return (-1);
	for (add = 1; index > 0; index--, add *= 2)
		;
	*n += add;
	return (1);
}
