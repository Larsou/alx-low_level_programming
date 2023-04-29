#include "lists.h"

/**
 * mynewline - Prints message before the main.
 *
 * Return: void.
 */
void mynewline(void) __attribute__ ((constructor));

void mynewline(void)
{

	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

