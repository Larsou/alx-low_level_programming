#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - reverse the element in a linked list
 * @head: pointer that points to the first node
 * Return: return pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *after, *befor;

	if (head == NULL || *head == NULL)
		return (NULL);

	befor = NULL;

	while ((*head)->next != NULL)
	{
		after = (*head)->next;
		(*head)->next = befor;
		befor = *head;
		*head = after;
	}

	(*head)->next = befor;

	return (*head);
}
