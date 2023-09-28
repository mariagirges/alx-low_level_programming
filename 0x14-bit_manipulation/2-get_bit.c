#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to evaluate
 * @index: is the index
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int holding;

	if (index > 64)
		return (-1);
	holding = n >> index;
	return (holding & 1);
}
