#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds positive numbers.
 * @argc: count arguments
 * @argv: array contain arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, n, addition = 0;

	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (!isdigit(argv[i][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		addition += atoi(argv[i]);
	}
	printf ("%d\n", add);
	return (0);
}
