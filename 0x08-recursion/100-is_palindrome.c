#include <stdio.h>
#include "main.h"
/**
 * palindrome - returns the power of number
 * @s: string
 * @l: integer
 * Return: length of a string
 */
int palindrome(char *s, int l)
{
	if (*s == 0)
		return (l - 1);
	return (palindrome( + 1, l + 1));
}
/**
 * palind - returns the power of number
 * @i: original number
 * @l: counter
 * Return: square root
 */
int palind(char *i, int l)
{
	if (*i != *(i + l))
		return (0);
	else if (*i == 0)
		return (1);
	return (palind3(i + 1, l - 2));
}
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: test number
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int x;

	x = palindrome(s, 0);
	return (palind(s, x));
}
