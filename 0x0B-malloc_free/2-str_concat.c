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
	int i, n, l, len, length;
	char *ptr;

	l = len = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			l++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len;
	}
	length = l + len;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		ptr[i] = s1[i];
	for (n = 0; n < len; n++, i++)
		ptr[i] = s2[n];
	ptr[length] = '\0';

	return (ptr);
}
