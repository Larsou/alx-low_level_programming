#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - function that return the sum of all data in a listint_t list.
 * @head: pointer to the first node in the linked list.
 * Return: sum of all data in the list and return 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int mysum = 0;
	listint_t *temp = head;

	while (temp)
	{
		mysum += temp->n;
		temp = temp->next;
	}

	return (mysum);
}
