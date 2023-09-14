#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list li;

	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(li, int));
		else if (separator && i == 0)
			printf("%d", va_arg(li, int));
		else
			printf("%s%d", separator, va_arg(li, int));
	}

	va_end(li);

	printf("\n");
}
