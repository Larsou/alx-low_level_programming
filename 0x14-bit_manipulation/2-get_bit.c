#include "main.h"
#include <stdio.h>
/**
 * get_bit - Function returns the value of  bit at the given
 * index
 * @n: represents the input number.
 * @index: represents the index of the bit wich value needs to be returned
 * Return: The value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int f;

	if (f == 0 && index < 64)
		return (0);
	for (f = 0; f <= 63; n >>= 1, f++)
	{
		if (index == f)
			return (n & 1);
	}
	return (-1);
}
