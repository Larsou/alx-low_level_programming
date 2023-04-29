#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list_t list.
 *
 * @head: pointer to the head of a linked list.
 *
 * Return: its reutun nothing
 */

void free_list(list_t *head)
{
	list_t *right;

	while (head)
	{
	right = head->next;
	free(head->str);
	free(head);
	head = right;
	}
}
