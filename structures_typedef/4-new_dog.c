#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - that duplicate a string of char
 * @str: pointer to a string
 * Return: pointer to a string
 */

char *_strdup(char *str);

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(strlen(str) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	{
		strcpy(s, str);
	}
	return (s);
}
/**
 * new_dog - that creating a new dog
 * @name: name is kayme
 * @age: is old bro
 * @owner: is me
 * Return: new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *kayme;

	kayme = malloc(sizeof(dog_t));
	if (kayme == NULL)
		return (NULL);

	kayme->name = strdup(name);
	if (kayme->name == NULL)
	{
		free(kayme);
		return (NULL);
	}
	kayme->owner = strdup(owner);
	if (kayme->owner == NULL)
	{
		free(kayme->name);
		free(kayme);
		return (NULL);
	}

	kayme->age = age;

	return (kayme);
}
