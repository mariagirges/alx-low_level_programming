#include <stdio.h>

/**
 * main - main function
 * Description:printing alphabet in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
