#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number evaluated
 * @index: is the index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int sum;

	if (index > 63)
		return (-1);
	sum = 1 << index;
	*n = *n & (~sum);
	return (1);
}
