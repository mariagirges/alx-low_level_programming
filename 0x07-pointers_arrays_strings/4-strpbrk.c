#include <stdio.h>
#include "main.h"
/**
 * main - searches a string for any of a set of bytes.
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return (NULL);
}
