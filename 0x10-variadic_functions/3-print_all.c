#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @c: char
 * @i: integer
 * @f: float
 * @s: char
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *sep = "";

	va_list valist;

	va_start(valist, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(valist, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(valist, int));
				case 'f':
					printf("%s%f", sep, va_arg(valist, double));
					break;
				case 's':
					string = va_arg(valist, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", sep, string);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(valist);
}
