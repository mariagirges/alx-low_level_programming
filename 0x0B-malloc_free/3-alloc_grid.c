#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the width of array
 * @height: the height of array
 * Return: pointer to a 2 dimensional array of integers.
 * or NULL
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, n;
	int length = width * height;

	if (length <= 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (i--; i>= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (n = 0; n< width; n++)
			ptr[i][n] = 0;
	return (ptr);
}
