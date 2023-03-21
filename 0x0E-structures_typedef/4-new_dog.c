#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen = 0, olen = 0, i;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = (dog_t *) malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	for (nlen = 0; name[nlen]; nlen++)

	new_dog->name = malloc(nlen * sizeof(char));
	if  (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (olen = 0; name[olen]; olen++)

	new_dog->owner = malloc(olen * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < nlen; i++)
		new_dog->name[i] = name[i];

	for (i = 0; i < olen; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;

	return (new_dog);
}
