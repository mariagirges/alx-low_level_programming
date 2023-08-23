#include <stdio.h>

/**
 * main - main function
 * Description:printing alphabets in lowercase
 * Return: Return
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		int putchar("%x", c);
		int putchar("\n");
	}
	return (0);
}
