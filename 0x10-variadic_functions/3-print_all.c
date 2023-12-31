#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format:  is a list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *ptr = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", ptr, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", ptr, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", ptr, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", ptr, str);
					break;
				default:
					i++;
					continue;
			}
			ptr = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
