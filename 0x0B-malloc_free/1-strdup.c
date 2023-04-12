#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: NULL if str is NULL, else pointer to new string
 *
 */

char *_strdup(char *str)
{
	char *s;
	int n, m;

	if (str == NULL)
		return (NULL);
	n = 0;
	while (str[n] != '\0')
		n++;

	s = malloc(sizeof(char) * (n + 1));

	if (s == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		s[m] = str[m];

	return (s);
}
