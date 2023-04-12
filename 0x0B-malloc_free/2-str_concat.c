#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL if it fails, pointer contains the content of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *point;
	int n, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n = m = 0;
	while (s1[n] != '\0')
		n++;
	while (s2[m] != '\0')
		m++;
	point = malloc(sizeof(char) * (n + m + 1));

	if (point == NULL)
		return (NULL);
	n = m = 0;
	while (s1[n] != '\0')
	{
		point[n] = s1[n];
		n++;
	}

	while (s2[m] != '\0')
	{
		point[n] = s2[m];
		n++, m++;
	}
	point[n] = '\0';
	return (point);
}
