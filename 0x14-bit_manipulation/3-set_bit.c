#include "main.h"
#include <stdio.h>
/**
 * set_bit - it sets the value of a bit to 1.
 * at a given index.
 * @n: The pointer of an unsigned long int.
 * @index: this is the index of the bit.
 *
 * Return: Returns 1 in success, -1 if failed.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int my;

	if (index > 63)
	{
		return (-1);
	}

	my = 1 << index;
	*n = (*n | my);

	return (1);
}
