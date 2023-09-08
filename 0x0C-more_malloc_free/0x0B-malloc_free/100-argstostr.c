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
	int i, n, x = 0, l = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	ptr = malloc((l + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			ptr[x] = av[i][n];
			x++;
		}
		if (ptr[x] == '\0')
		{
			ptr[x++] = '\n';
		}

	}
	return (ptr);
}
