#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase.
*/
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
