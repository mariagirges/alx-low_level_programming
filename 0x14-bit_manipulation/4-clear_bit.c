#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index:  is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int group;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	group = ~(1 << index);
	*n = *n & group;
	return (1);
}
