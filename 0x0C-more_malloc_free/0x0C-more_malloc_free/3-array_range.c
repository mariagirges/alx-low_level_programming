#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers.
 * @min: smallest value in array
 * @max: largest number in array
 * Return: the pointer to the newly created array or NULL
 */
int *array_range(int min, int max)
{
	int i, range = (max - min) + 1;
	int *p;

	if (min > max)
		return (NULL);
	p = (int *) malloc(sizeof(int) * range);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
