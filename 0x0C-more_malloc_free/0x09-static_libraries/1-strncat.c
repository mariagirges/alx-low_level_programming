#include <stdio.h>
#include "main.h"
/**
 * _strncat - join between two strings,
 * @dest: destination of string.
 * @src: source of string.
 * @n: amount of bytes.
 * Return: the pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[x] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}
