#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: the size of array
 * @size: size of each element
 * Return: returns NULL if fails, otherwise pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(nmemb * size);
	if (i == NULL)
	{
		return (NULL);
	}

	memset(i, 0, nmemb * size);

	return (i);
}
