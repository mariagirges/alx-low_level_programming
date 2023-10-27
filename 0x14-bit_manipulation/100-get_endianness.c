#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: void
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)(&i);

	return (*c);
}
