#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * name: name of dog
 * age: age of dog
 * owner: owner of dog
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen = 0, olen = 0, i;
	dog_t *new_dog;

	/** Checking the lengths of name and owner strings*/
	if (name[nlen] != '\0')
	{
		nlen++;
	}

	if (owner[olen] != '\0')
	{
		olen++;
	}

	/** Allocating memory for new_dog struct*/
	new_dog = (dog_t *) malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/** Allocating memory for name and owner */
	new_dog->name = (char *) malloc((nlen + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = (char *) malloc((olen + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= nlen; i++)
	{
		new_dog->name[i] = name[i];
	}
	for (i = 0; i <= olen; i++)
	{
		new_dog->owner[i] = owner[i];
	}
	new_dog->age = age; /** Set age of new dog*/

	return (new_dog);


}
