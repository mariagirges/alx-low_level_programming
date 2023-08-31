#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @*s: string element
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (str[i] == '\0')
		return;

	putchar("%c", str[i]);
	_puts_recursion(i + 1);
	putchar('\n');
}
