#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{
        int i;
	char f;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (f = 'a' ; f <= 'z' ; f++)
			_putchar(f);
		_putchar('\n');
	}
}
