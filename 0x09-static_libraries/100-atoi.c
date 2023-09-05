#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: string item.
 * Return: integer that converted from the string.
 */
int _atoi(char *s)
{
	unsigned int x, y, z, pn, m, i;

	x = 0, y = 0, z = 0, pn = 1, m = 1;

	while (*(s + x) != '\0')
	{
		if (y > 0 && (*(s + x) < '0' || *(s + x) > '9'))
			break;
		if (*(s + x) == '-')
			pn *= -1;

		if ((*(s + x) >= '0') && (*(s + x) <= '9'))
		{
			if (y > 0)
				m *= 10;
			y++;
		}
		count++;
	}

	for (i = count - y; i < x; i++)
	{
		z = z + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (z * pn);
}
