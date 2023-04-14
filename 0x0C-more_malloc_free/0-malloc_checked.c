#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: number of bytes to allocate
 * Return: void
 */

void *malloc_checked(unsigned int b)
{

unsigned int *p;


	p = malloc(b);

	if (!p)
	{

		exit(98);
	}

	return (p);
}
