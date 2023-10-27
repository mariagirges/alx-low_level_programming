#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: ....
 * @m: ....
 * Return: the number of bits you would need to flip to get
 * from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = n ^ m;
	unsigned int count;

	while (mask > 0)
	{
		count += (mask & 1) ? 1 : 0;
		mask = mask >> 1;
	}
	return (count);
}
