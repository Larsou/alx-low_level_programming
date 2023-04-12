#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char
 * Return: Returns pointer to the array, NULL if fail, NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *arra;
	unsigned int j;

	arra = malloc(sizeof(char) * size);

	if (size == 0 || arra == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		arra[j] = c;
	return (arra);
}
