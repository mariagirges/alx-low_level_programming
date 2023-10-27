#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: void
 */
int get_endianness(void)
{
	int x = 1;
	char *c = (char *)&x;

	return ((*c) ? 1 : 0);
}
