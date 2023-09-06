#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: argument
 * @av: double pointer
 * Return: NULL or av or pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *x, *ptr;
	int i, n, sum;

	if (ac == 0 || av == NULL)
		return (NULL);
	if ((i = 0, sum = 0); i < ac; i++)
	{
		for (n = 0; *(*(av + i) + n) != '\0'; n++, sum++)
			sum++;
	}
	x = malloc(sum * sizeof(char));
	if (x == NULL)
		return (NULL);
	ptr = x;
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			*x = av[i][n];
			x++;
		}
		*x = '\n';
		x++;
	}
	return (ptr);
}
