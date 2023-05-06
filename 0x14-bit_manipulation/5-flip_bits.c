#include "main.h"
#include <stdio.h>
/**
 * flip_bits - Function returns the number of bits changee
 * need to flip.
 * @n: this is first number.
 * @m: this is second number.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k = n ^ m;
	unsigned int cont = 0;

	while (k > 0)
	{
		cont++;
		k &= (k - 1);
	}
	return (cont);
}
