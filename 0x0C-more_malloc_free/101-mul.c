#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @str: string
 * Return: 0 or 1
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @str: string
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s, *str;
	int l, len, length, i, carry, d, digit, *result, a = 0;

	s = argv[1], str = argv[2];
	if (argc != 3 || !is_digit(s) || !is_digit(str))
		errors();
	l = _strlen(s);
	len = _strlen(str);
	length = l + len + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (i = 0; i <= l + len; i++)
		result[i] = 0;
	for (l = l - 1; l >= 0; l--)
	{
		d = s[l] - '0';
		carry = 0;
		for (len = _strlen(str) - 1; len >= 0; len--)
		{
			digit = str[len] - '0';
			carry += result[l + len + 1] + (d * digit);
			result[l + len + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[l + len + 1] += carry;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
