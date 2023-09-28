#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int tot, pow;
	int length;

	if (b == NULL)
		return (0);
	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}
	for (pow = 1, tot = 0, length--; length >= 0; length--, pow *= 2)
	{
		if (b[length] == '1')
			tot += pow;
	}
	return (tot);
}
