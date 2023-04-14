#include "main.h"
#include <stdlib.h>
#include <stdlib.h>


/**
 * array_range - creates an array of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int n;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (n = 0; n <= max - min; n++)
	{
		array[n] = min + n;
	}

	return (array);
}
