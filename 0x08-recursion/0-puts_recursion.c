#include <stdio.h>
#include " _putchar.c"
#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string to print
 * Return: void
 */
void _puts_recursion(char *s);
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
