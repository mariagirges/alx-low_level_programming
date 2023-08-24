#include <stdio.h>

/**
 *main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int n1, n2;

for (n1 = 0; n1 < 100; n1++)
{
for (n2 = 0; n2 < 100; n2++)
{
if (n1 < n2)
{
putchar((n1 / 10) + 48);
putchar((n1 % 10) + 48);
putchar(' ');
putchar((n2 / 10) + 48);
putchar((n2 % 10) + 48);
if (n1 != 98 || n2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
