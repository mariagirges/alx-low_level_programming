#include <stdio.h>
#include "main.h"
/**
 * _strcat - join between two strings
 * @dest: pointer of char
 * @src: pointer of char
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y = 0

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
