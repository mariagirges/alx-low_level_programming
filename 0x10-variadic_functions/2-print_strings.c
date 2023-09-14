#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int runner;
	char *string;

	va_start(valist, n);

	for (runner = 0; runner < n; runner++)
	{
		string = va_arg(valist, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (runner != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
