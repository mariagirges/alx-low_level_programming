#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: input name
 * @f: function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
