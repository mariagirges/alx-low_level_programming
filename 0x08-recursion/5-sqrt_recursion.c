#include <stdio.h>
#include "main.h"
/**
 *  _sqrt_recursion - returns the natural square root of a number.
 *  @n: natural square
 *  Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return ( int _sqrt(n, 1));
}
/**
 *  _sqrt - search for natural square root.
 *  @n: integer number
 *  @x: iterate number
 *  Return: the natural square root of a number.
 */
int _sqrt(int n, int x)
{
	int sqrt = x * x;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (x);
	 return (_sqrt(n, x + 1));
}



