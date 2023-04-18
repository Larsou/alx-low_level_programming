#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of the dog
 *
 * Return: struct of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len_nam, len_own;

	dog_t *new_dog = NULL;

	len_nam = 0, len_own = 0;
	while (name[len_nam] != '\0')
		len_nam++;
	while (own[len_own] != '\0')
		len_own++;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(len_nam + 1);
	if (new_dog->nam == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->own = malloc(len_own + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= len_nam; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= len_own; i++)
		new_dog->owner[i] = owner[i];
	new_dog->age = age;
	return (new_dog);
}
