#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - prints anything.
 *@format: this is an input list of types
 */

void print_all(const char * const format, ...)
{
	va_list strings;
	char *tmp, *separator = "";
	unsigned int n = 0;

	va_start(strings, format);
	while (format && format[n])
	{
		switch (format[n])
		{
			case 'c':
				printf("%s%c", separator, va_arg(strings, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(strings, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(strings, double));
				break;
			case 's':
				tmp = va_arg(strings, char *);
				if (tmp)
				{
					printf("%s%s", separator, tmp);
					break;
				}
				printf(", (nil)");
				break;
			default:
				n++;
				continue;
		}
		separator = ", ";
		n++;
	}
	va_end(strings);
	printf("\n");
}
