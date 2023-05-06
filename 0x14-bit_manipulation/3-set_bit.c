#include "main.h"
#include <stdio.h>
/**
 * set_bit - Function that sets the value of a bit to an index. 
 * @n: The pointer of an unsigned long int
 * @index: Its the index of the bit
 * Return: ruturns 1 if successful, -1 if failed.
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
