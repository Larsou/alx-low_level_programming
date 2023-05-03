#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that insert new node at position.
 * @head: pointer to first node in list.
 * @n: Value of the new node
 * @idx: Index of the list where we add the new node.
 * Return: return NULL if fail , return new node address.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newn, *actual;
	unsigned int k;

	if (head == NULL)
	return (NULL);

	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
	return (NULL);

	newn->n = n;
	if (idx == 0)
	{
	newn->next = *head;
	*head = newn;
	return (newn);
	}

	actual = *head;
	for (k = 0; k < idx - 1; k++)
	{
	if (actual == NULL || actual->next == NULL)
	{
		free(newn);
		return (NULL);
	}
	actual = actual->next;
	}

	newn->next = actual->next;
	actual->next = newn;

	return (newn);
}
