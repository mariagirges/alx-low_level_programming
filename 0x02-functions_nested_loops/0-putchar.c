#include <stdio.h>
#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[18] = "_putchar";

	for (int i = 0; i <= 9; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
