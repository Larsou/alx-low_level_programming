#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Prints the elements of  listint_t list.
 * @h: the list.
 *
 * Return: its number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	k++;
	h = h->next;
	}

	return (k);
}
