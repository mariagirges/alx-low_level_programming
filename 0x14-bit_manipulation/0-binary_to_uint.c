#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		i = i << 1;

		if (*b != '1' && *b != '0')
			return (0);

		else if (*b == '1')
			i = i | 1;
		b++;
	}
	return (i);
}
