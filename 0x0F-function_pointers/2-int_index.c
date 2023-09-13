#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @size: is the number of elements in the array
 * @array: array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: the index of the first element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
