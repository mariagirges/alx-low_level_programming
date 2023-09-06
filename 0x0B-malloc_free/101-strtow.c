#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * **strtow - splits a string into words.
 * @str: string
 * Return: a pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
	char **ptr;
int i, n = 0, temp = 0, length = 0, w = num_words(str);

if (w == 0)
return (NULL);
ptr = (char **) malloc(sizeof(char *) * (w + 1));
if (ptr != NULL)
{
for (i = 0; i <= len(str) && w; i++)
{
if ((str[i] != ' ') && (str[i] != '\0'))
length++;
else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
{
ptr[n] = (char *) malloc(sizeof(char) * length + 1);
if (ptr[n] != NULL)
{
while (temp < length)
{
ptr[n][temp] = str[(i - length) +temp];
temp++;
}
ptr[n][temp] = '\0';
length = temp = 0;
n++;
}
else
{
while (n-- >= 0)
free(ptr[n]);
free(ptr);
return (NULL);
}
}
}
ptr[w] = NULL;
return (ptr);
}
else
return (NULL);
}

/**
 * num_words - counts the number of words in string
 *@str: string
 *Return: number of words
 */
int num_words(char *str)
{
int i = 0, w = 0;

while (i <= len(str))
{
if ((str[i] != ' ') && (str[i] != '\0'))
{
i++;
}
else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
{
w += 1;
i++;
}
else
{
i++;
}
}
return (w);
}

/**
 * len - returns length of string
 *@str: string
 * Return: length of the string
 */
int len(char *str)
{
int length = 0;

if (str != NULL)
{
while (str[length])
length++;
}
return (length);
}
