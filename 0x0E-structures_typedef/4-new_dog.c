#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
<<<<<<< HEAD
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the Age of dog
 * @owner: the Name of owner
 *
 * Return: struct of dog
=======
 * new_dog - this is a function that creates a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: name of the owner.
 * Return: new dog.
>>>>>>> 4032fdcd7adec85267674da1fbd0336244d21f3f
 */

dog_t *new_dog(char *name, float age, char *owner)
{
<<<<<<< HEAD
	int j, len_name, len_owner;

	dog_t *new_dog = NULL;

	len_name = 0, len_owner = 0;
	while (name[len_name] != '\0')
		len_name++;
	while (owner[len_owner] != '\0')
		len_owner++;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
=======
	dog_t *newdog;
	char *namecl, *ownercl;
	int n;

	newdog = malloc(sizeof(dog_t));
	namecl = malloc (strlen(name) + 1);
	ownercl = malloc (strlen(owner) + 1);
	for (n = 0; name[n]; n++)
>>>>>>> 4032fdcd7adec85267674da1fbd0336244d21f3f
	{
		namecl[n] = name[n];
	}
	namecl[n + 1] = '\0';

<<<<<<< HEAD
	new_dog->name = malloc(len_name + 1);
	if (new_dog->name == NULL)
=======
	for (n = 0; owner[n]; n++)
>>>>>>> 4032fdcd7adec85267674da1fbd0336244d21f3f
	{
		ownercl[n] = owner[n];
	}
	ownercl[n + 1] = '\0';

<<<<<<< HEAD
	new_dog->owner = malloc(len_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (j = 0; j <= len_name; j++)
		new_dog->name[j] = name[j];
	for (j = 0; j <= len_owner; j++)
		new_dog->owner[j] = owner[j];
	new_dog->age = age;
	return (new_dog);
=======
	newdog->name = namecl;
	newdog->owner = ownercl;
	newdog->age = age;

	return (newdog);
>>>>>>> 4032fdcd7adec85267674da1fbd0336244d21f3f
}
