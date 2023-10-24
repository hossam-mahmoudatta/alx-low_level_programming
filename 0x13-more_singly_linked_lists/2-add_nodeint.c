#include "lists.h"

/**
 * add_nodeint - that adds a new node at the beginning of a list
 *
 * @head: the struct that contains the data
 * @n: string to be copied into the linked list
 *
 * Return: a listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (!node)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
