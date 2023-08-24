#include <stdio.h>
#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
	{
		putchar(str[ch]);
		putchar('\n');
	}
	return (0);
}
