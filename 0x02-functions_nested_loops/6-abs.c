#include <stdio.h>
#include "main.h"
/**
 * _abs - prints the absolute value.
 * @n: number targeted
 * Return: returns 0
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else 
	{
		return (0);
	}
}
