#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete the nide at the index.
 * @index: index to delete new node.
 * @head: pointer to the first node in the list.
 * Return: return -1 if its fails , 1 if it succeeded.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *k = *head;
	listint_t *tm = NULL;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(k);
		return (1);
	}

	while (n < index - 1)
	{
		if (!k || !(k->next))
			return (-1);
		k = k->next;
		n++;
	}


	tm = k->next;
	k->next = tm->next;
	free(tm);

	return (1);
}
