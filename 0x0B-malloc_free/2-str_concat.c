#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer should point to a newly 
 * allocated space in memory or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i = 0, n = 0, len = 0, length = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[length])
		length++;

	str = malloc(sizeof(char) * (len + length + 1));
	if (str == NULL)
		return (NULL);

	i = 0;
	n = 0;

	if (s1)
	{
		while (i < len)
		{
			str[i] = s1[i];
		}
	}
	if (s2)
	{
		while (i < (len + length))
		{
			str[i] = s2[n];
			i++;
			n++;
		}
	}
	str[i] = '\0';
	return (str);
}

