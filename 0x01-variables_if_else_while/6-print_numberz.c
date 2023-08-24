#include <stdio.h>
/**
 * main - main function
 * Description:printing digit number
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');
	return (0);
}
