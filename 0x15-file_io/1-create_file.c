#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int letter;
	int rwr;

	if (!filename)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (letter = 0; text_content[letter]; letter++)
		;
	rwr = write(fp, text_content, letter);
	if (rwr == -1)
		return (-1);
	close(fp);
	return (1);
}
