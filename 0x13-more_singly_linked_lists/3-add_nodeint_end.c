#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of listint_t list.
 * @head: Pointer to first node in list.
 * @n: The integer value.
 *
 * Return: The address of the new , or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *start, *previo;

	start = malloc(sizeof(listint_t));
	if (!start)
	{
		return (NULL);
	}
	if (!*head)
	{
		start->n = n;
		start->next = NULL;
		return (*head = start);
	}
	else
	{
	previo = *head;
	while (previo->next)
	{
		previo = previo->next;
	}

	previo->next = start;
	start->n = n;
	start->next = NULL;
	return (start);
	}
}
