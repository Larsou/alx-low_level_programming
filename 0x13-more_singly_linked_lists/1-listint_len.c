#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: this is the pointer to the head node of list.
 *
 * Return: The number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t nlen = 0;

	while (h != NULL)
	{
		nlen++;
		h = h->next;
	}

	return (nlen);
}
