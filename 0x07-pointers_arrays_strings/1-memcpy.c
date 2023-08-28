#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: second memory area
 * @n: the number of bytes
 * @src: first memory area 
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
