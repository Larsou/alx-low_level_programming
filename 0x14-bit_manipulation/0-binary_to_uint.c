#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * binary_to_uint - converts a binary number to the unsigned int nmbr.
 * @b: constant binary
 * Return: The unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int bin = 0;

	if (b == NULL)
	{
	return (0);
	}

	for (k = 0; b[k] != '\0'; k++)
	{
	if (b[k] == '0')
	{
		bin <<= 1;
	}
	else if (b[k] == '1')
	{
		bin <<= 1;
		bin |= 1;
	}
	else
		{
		return (0);
		}
	}

	return (bin);
}

