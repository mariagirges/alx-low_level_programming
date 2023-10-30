#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 *  to the POSIX standard output.
 * @filename: file name
 * @letters: letters
 * Return:  the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fp, read_file;

	if (!filename)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	read_file = read(fp, buffer, letters);
	write(STDOUT_FILENO, buffer, read_file);
	close(fp);
	free(buffer);
	return (read_file);
}
