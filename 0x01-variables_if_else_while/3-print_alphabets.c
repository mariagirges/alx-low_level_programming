#include <stdio.h>
/**
 * main - main function
 * Description:printing alphabets in lowercase and uppercase
 * Return: Return
 */
int main(void)
{
	int ch, c;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	return (0);
}
