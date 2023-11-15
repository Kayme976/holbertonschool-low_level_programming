#include "dog.h"
#include <stdio.h>

/**
 * init_dog - that initialize dog
 * @d: it is my ptr
 * @name: it is the name of my dog
 * @age: it is the age of my dog
 * @owner: it is still me
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
