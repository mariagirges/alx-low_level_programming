#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
int n;
int c;

while (n < 10)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	n++;
}
}
