#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * count_word - count number of words in string
 * @str: string
 * Return: number of words
 */
int count_word(char *str)
{
	int flag, count, word;

	flag = 0;
	word = 0;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (str[count] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			word++;
		}
	}
	return (word);
}
/**
 * **strtow - splits a string into words.
 * @str: pointer
 * Return: char
 */
char **strtow(char *str)
{
	char **matrix, *temp;
	int i, n = 0, l = 0, word, count = 0, start, end;

	while (*(str + l))
		l++;
	word = count_word(str);
	if (word == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (word + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (count)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (count + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				matrix[n] = temp - count;
				n++;
				count = 0;
			}
		}
		else if (count++ == 0)
			start = i;
	}
	matrix[n] = NULL;
	return (matrix);
}
