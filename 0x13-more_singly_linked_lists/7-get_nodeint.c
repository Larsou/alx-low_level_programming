#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that return the node at the index in a linked list
 * @head: Pointer to first node.
 * @index: index of node to return.
 * Return: return Pointer to the nth node that we want or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; head != NULL && n < index; n++)
	head = head->next;

	return ((head == NULL || n != index) ? NULL : head);
}
