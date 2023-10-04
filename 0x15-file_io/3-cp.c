#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * error_file - check if file is opened
 * @fd_from: from.
 * @fd_to: to.
 * @argv: arguments
 * Return: void
 */
void error_file(int fd_from, int fd_to, char *argv[])
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - check the code
 * @argc: number of argument
 * @argv: arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int from, to, error;
	ssize_t chars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(from, to, argv);
	chars = 1024;
	while (chars == 1024)
	{
		chars = read(from, buffer, 1024);
		if (chars == -1)
			error_file(-1, 0, argv);
		nwr = write(to, buffer, chars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}
	error = close(from);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	error = close(to);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (0);
}
