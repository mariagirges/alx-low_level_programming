#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: parameter
 * Return: the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(list, unsigned int);
	va_end(list);
	return (sum);
}
