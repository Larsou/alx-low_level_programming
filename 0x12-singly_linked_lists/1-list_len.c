#include "lists.h"

/**
 * list_len - prints length of list_t linked list
 * @h: the linked list
 * Return: number of nodes/elements (length) in linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (t);
}
