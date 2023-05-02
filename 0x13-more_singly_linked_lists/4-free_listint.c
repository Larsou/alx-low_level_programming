#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: Point the head node of the list.
 * Return: return the free space
 */

void free_listint(listint_t *head)
{
	listint_t *actual, *newnode;

	actual = head;

	while (actual != NULL)
	{
		newnode = actual->next;
		free(actual);
		actual = newnode;
	}
}



