#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string element
 * Return:  the length of a string.
 */
int _strlen_recursion(char *s)
{
	int i;

	if(s[i]=='\0')
		return i;
	_strlen_recursion(s,++i);
}

