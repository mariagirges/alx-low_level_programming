#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string element
 * Return:  the length of a string.
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	putchar('\n');
	return (l);
}

