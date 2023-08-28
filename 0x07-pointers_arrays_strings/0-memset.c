#include <stdio.h>
#include <main.h>
/**
 * _memset - fills memory with a constant byte.
 *
 * @s: constant byte
 * @n: bytes
 * @b: constant byte
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

   for (m = 0; m < n; m++)
   {
      s[m] = b;
   }
   _putchar('\n');
   return (s);
}
