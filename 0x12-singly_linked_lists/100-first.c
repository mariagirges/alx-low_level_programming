#include <stdio.h>
#include <stdlib.h>
/**
 * first - prints stetment before main
 * Return: void
 */
void __attribute__ ((constructor)) first()
{
	printf("you're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
