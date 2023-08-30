#include <stdio.h>
#include "main.h"
/**
 * check - check the prime number
 * @n1: the first number
 * @n2: the second number
 * Return: prime number
 */
int check(int n1, int n2)
{
	if(n2 < 2 || n2 % n1 == 0)
		return (0);
	else if (n1 > n2 / 2)
		return (1);
	else 
		return (check(n1 + 1, n2))
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number .
 * @n: input integer
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	int div;

	div = 2;

	if (n <= 3)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	return (is_divisible(n, div));
}

