#include <stdio.h>
#include "main.h"
/**
 *prim - return power of any number
 *@x: original number
 *@y: counter that compare multiplication
 *Return: square root
 */
int prim(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (prim(x, y + 1));
}
/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: test number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prim(n, 2));
}
