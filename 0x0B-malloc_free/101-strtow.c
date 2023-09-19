#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * **strtow - splits a string into words.
 * @str: pointer
 *
 * Return: char
 */
char **strtow(char *str)
{
	char **c;
	int i;
	int n = 0;
	int counter = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
			counter++;
	}
	c = malloc(sizeof(char) * counter);
	if (c == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 32)
		{
			*c[n] = str[i];
			n++;
		}
		else
		{
		}
	}
	return (c);
}
