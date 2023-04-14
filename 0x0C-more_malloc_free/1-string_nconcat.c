#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes
 * Return: NULL if fail, otherwise pointer of char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mt;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != 0)
	{
		len1++;
	}

	while (s2[len2] != 0)
	{
		len2++;
	}

	if (n >= len2)
		n = len2;
	mt = malloc(sizeof(char) * len1 + n + 1);

	if (mt == NULL)
		return (NULL);

	for (i = 0; s1[i] != 0; i++)
	{
		mt[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		mt[j + i] = s2[j];
	}
	mt[j + i] = 0;
	return (mt);
}
