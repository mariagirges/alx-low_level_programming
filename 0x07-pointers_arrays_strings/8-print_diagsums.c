#include "main,h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: the array name
 * @size: array size
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int x, y, value1, value2;
	
	value1 = 0;

	value2 = 0;

	for (x = 0; x <= (size * size); x = x + size + 1)
		value1 = value1 + a[x];

	for (y = size - 1; n <= (size * size) - size; y = y + size - 1)
		value2 = value2 + a[y];
	printf("%d, %d\n", value1, value2);
}

