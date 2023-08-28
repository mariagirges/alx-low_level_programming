#include <stdio.h>
#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @c: character
 * @s: string
 * Return: a pointer to the first occurance of the character @c in the string
 *  @s. Return NULL if the character isn't found
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return (NULL);
}
