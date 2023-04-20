#include <stdio.h>
#include "function_pointers.h"

/**
*array_iterator - execute finctions
*@array: the array
*@size: size of array
*@action: pointer to fanctions
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (j = 0; j < size; j++)
	{
	action(array[j]);
	}
}
