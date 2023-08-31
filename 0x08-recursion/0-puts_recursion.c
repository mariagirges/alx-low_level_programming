#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @*s: string element
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	putchar('%c', *s);
	_puts_recursion(*s + 1);
	putchar('\n');
}
