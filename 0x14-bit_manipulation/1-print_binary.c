#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * rec - the recursive function
 *  @n: number evaluated
 *  Return: void
 */
void rec(unsigned long int n)
{
	if (n != 0)
	{
		rec(n >> 1);
		_putchar((n & 1) ? '1' : '0');
	}
}
/**
 * print_binary - prints the binary representation of a number.
 * @n: number evaluated
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		rec(n);
}

