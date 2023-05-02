#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *  @head: Pointer that points the head node of the list.
 *
 *  Return: returns the head node’s data or 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
	int m;
	listint_t *k;

	m = 0;
	if (head && *head)
	{
		k = *head;
		if ((*head)->n)
		{
			m = (*head)->n;
		}
		*head = (*head)->next;
		free(k);
	}
	return (m);
}
