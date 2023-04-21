#include <stdio.h>
#include "function_pointers.h"

/**
*int_index - function that searches for an integer.
*@array: array
*@size: size of the array
*@cmp: pointer to the function to be used to compare values
*Return: Integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (j = 0; j < size; j++)
{
	if (cmp(array[j]) != 0)
	{
		return (j);
	}
}

	if (size <= 0 || j == size)
{
	return (-1);
}
return (-1);
}
