#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment
 * @accept: include bytes
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept){
	unsigned int x, m;

	int value = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		int check = 0;

		for (n = 0; accept[m] != '\0'; m++)
		{
			if (accept[m] == s[x])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
			return (value);
	}
	return (value);
}
