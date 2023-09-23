#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int m;

	m = 0;

	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}

/**
 * *_strcpy - copies the string to src
 * @ptr: pointer
 * @str: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *ptr, char *str)
{
	int l, a;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	for (a = 0; a < l; a++)
	{
		ptr[a] = str[a];
	}
	ptr[a] = '\0';
	return (ptr);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l, len;

	l = _strlen(name);
	len = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
