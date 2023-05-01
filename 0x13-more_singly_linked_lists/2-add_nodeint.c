#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @ihead: It's list head address.
 * @n: value.
 *
 * Return: This is the address of the new node, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *k;

	k = malloc(sizeof(listint_t));
	if (k == NULL)
	{
		return (NULL);
	}
	k->n = n;
	k->next = *head;
	*head = k;

	return (k);
}
