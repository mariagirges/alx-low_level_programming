#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - start point
 * @argc: counter
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	printf("%d\n", operation(n1, n2));
	return (0);
}
