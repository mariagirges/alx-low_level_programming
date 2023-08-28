#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: memory area
 * @n: bytes of the memory
 * @b: constant byte
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
