#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *a;
	int i, full = 0;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(*a) * ((max - min) + 1));
	if (a != NULL)
	{
		for(i = min; i <= max; i++)
		{
			a[full] = i;
			full++;
		}
		return (a);
	}
	else
		return (NULL);
}	
