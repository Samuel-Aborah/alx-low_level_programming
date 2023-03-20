#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a function that initialize a
 * variable of type struct dog
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	while (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

	}
}
