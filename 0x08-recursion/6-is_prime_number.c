#include "main.h"
#include <stdio.h>
int is_help_prime(int n, int i);
/**
 * is_prime_number - checks if a number is prime
 * emyy st yle
 * @n: the number to check
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);

	return (is_help_prime(n, 3));
}

/**
 * is_help_prime - recursive supporter function for is_prime_number()
 * @n: the integer to check
 * @i: the divisor to test
 * emmy st yle
 * Return: 1 if n is prime, otherwise 0
 */

int is_help_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);

	return (is_help_prime(n, i + 2));
}
