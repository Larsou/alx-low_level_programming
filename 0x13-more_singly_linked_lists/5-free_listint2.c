#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Frees listint_t list and sets head to the NULL.
 * @head: Pointer taht point to the head node of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *actual, *k;

	if (head)
	{
	actual = *head;
	while (actual)
	{
		k = actual;
		actual = actual->next;
		free(k);
	}
	*head = NULL;
	}
	else
	{
		return;
	}
}
