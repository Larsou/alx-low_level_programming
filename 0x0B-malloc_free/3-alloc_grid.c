#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a 2D array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 2d array if succesful and NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int n;
	int j;

	if (width == 0 && height == 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (!arr)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		arr[n] = malloc(sizeof(int) * width);
		if (!arr[n])
		{
			for (j = 0; j < n; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[n][j] = 0;
	}
	return (arr);
}
