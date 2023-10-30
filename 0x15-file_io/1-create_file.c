#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - creates a file.
 * @filename: is the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp, i;

	if (!filename)
		return (-1);
	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (i = 0; *(text_content + i) != '\0'; i++)
		;

	write(fp, text_content, i);
	close(fp);
	return (1);
}
