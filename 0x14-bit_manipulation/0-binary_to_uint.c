#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * binary_to_uint - converts a binary number to the  unsigned int nbr.
 * @b: the constant binary.
 * Return: unsigned int of decimal.
 */

unsigned int binary_to_uint(const char *b)
{	
	int temp, bin;
	unsigned int i;

	if (!b)
		return (0);

	i = 0;

	for (temp = 0; b[temp] != '\0'; temp++)
		;

	for (temp--, bin = 1; temp >= 0; temp--, bin *= 2)
	{
		if (b[temp] != '0' && b[temp] != '1')
		{
			return (0);
		}

		if (b[temp] & 1)
		{
			i += bin;
		}
	}

	return (i);
}
