#include "lists.h"

/**
 * add_node_end - adds a node to the singly linked list
 * @head: the pointer that points head of the list
 * @str: data of to the store
 *
 * Return: the pointer to a new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *right;
	list_t *tmp = *head;

	right = malloc(sizeof(*right));
	if (right)
	{
		right->str = strdup(str);
		right->len = strlen(str);
		right->next = NULL;
		if (!(*head))
		{
			*head = right;
			return (right);
		}
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = right;
	}

	return (right);
}
