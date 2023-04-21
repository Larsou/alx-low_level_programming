#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int j;
	char *s;

	va_start(num, n);

	for (j = 0; j < n; j++)
	{
		s = va_arg(num, char*);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL && j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}


