#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
int from, to;
int number1 = 1024, number2 = 0;
char buf[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
from = open(argv[1], O_RDONLY);
if (from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(from), exit(99);
}
while (number1 == 1024)
{
	number1 = read(from, buf, 1024);
	if (number1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	number2 = write(to, buf, number1);
	if (number2 < number1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
if (close(from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
if (close(to) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
return (0);
}
