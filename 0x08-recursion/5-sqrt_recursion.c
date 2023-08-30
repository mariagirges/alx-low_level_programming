#include <stdio.h>
#include "main.h"
/**
 * sqrt - search the square root of value
 * @x: first value
 * @y: second value
 * Return: the square root
 */
int sqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	else 
		return (sqrt(y, x + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: natural square root 
 * Return: square root 
 */
int _sqrt_recursion(int n)
{
	return(sqrt(n, 1));
}
