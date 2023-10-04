#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file name
 * @letters: letters evaluated
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t l = 0, finall_l = 0;
	int fp;
	char *buffer = NULL;

	if (filename == NULL)
		return (l);
	fp = open(filename, O_RDWR | O_CREAT);
	if (fp < 0)
		return (l);
	buffer = malloc(sizeof(*buffer) * letters);
	if (buffer == NULL)
		return (l);
	l = read(fp, buffer, letters);
	finall_l = write(STDOUT_FILENO, buffer, l);
	if (finall_l != l)
	l = 0;
	close(fp);
	free(buffer);
	return (l);
}
