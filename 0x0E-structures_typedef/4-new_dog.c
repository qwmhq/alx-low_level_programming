#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *namecpy, *ownercpy;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	namecpy = malloc((strlen(name) + 1) * sizeof(char));
	if (namecpy == NULL) 
	{
		free(d);
		return (NULL);
	}

	ownercpy = malloc((strlen(owner) + 1) * sizeof(char));
	if (ownercpy == NULL)
	{
		free(ownercpy);
		free(d);
		return (NULL);
	}

	d->name = strcpy(namecpy, name);
	d->age = age;
	d->owner = strcpy(ownercpy, owner);

	return (d);
}
