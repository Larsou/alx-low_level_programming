#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - this is a function that creates a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: name of the owner.
 * Return: new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *namecl, *ownercl;
	int n;

	newdog = malloc(sizeof(dog_t));
	namecl = malloc (strlen(name) + 1);
	ownercl = malloc (strlen(owner) + 1);
	for (n = 0; name[n]; n++)
	{
		namecl[n] = name[n];
	}
	namecl[n + 1] = '\0';

	for (n = 0; owner[n]; n++)
	{
		ownercl[n] = owner[n];
	}
	ownercl[n + 1] = '\0';

	newdog->name = namecl;
	newdog->owner = ownercl;
	newdog->age = age;

	return (newdog);
}
