#include <stdio.h>
#include "main.h"
int checker(int n, int x);
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: value
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - search for the natural square root
 * @n: integer to calculate square root
 * @i: iterator
 * Return: value of square root
 */
int checker(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (checker(n, x + 1));
}
