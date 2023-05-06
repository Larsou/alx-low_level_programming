#include "main.h"
#include <stdio.h>
/**
 * get_endianness - Function that checks the endianness.
 *
 * Return: will return at  big-endian - 0.
 *         will return at little-endian - 1.
 */
int get_endianness(void)
{
	unsigned int tmp;
	char *k;

	tmp = 1;
	k = (char *) &tmp;

	return ((int)*k);
}
