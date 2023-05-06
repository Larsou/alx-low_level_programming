#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * get_bit - Function returns the value of bit at given index.
 * @n: the input number wich bit value needs to be retrieved
 * @index: This is the index of the bit.
 *
 * Return: The value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;

	if (n == 0 && index < 64)
		return (0);

	for (m = 0; m <= 63; m >>= 1, m++)
	{
		if (index == m)
		{
			return (n & 1);
		}
	}

	return (-1);
}
