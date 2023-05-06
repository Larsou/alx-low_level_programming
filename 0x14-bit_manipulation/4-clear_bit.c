#include "main.h"
#include <stdio.h>
/**
 * clear_bit - Fuction sets the value of a bit to 0
 * at a given index
 * @n: this is pointer of unsigned long int
 * @index: index of the bit
 * Return: 1 if it success, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tmp;

	if (index > 63)
		return (-1);

	tmp = 1 << index;

	if (*n & tmp)
		*n ^= tmp;

	return (1);
}
