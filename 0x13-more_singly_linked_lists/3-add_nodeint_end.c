#include "lists.h"

/**
 * add_nodeint_end - that adds a new node at the end of a list
 *
 * @head: the struct that contains the data
 * @n: string to be copied into the linked list
 *
 * Return: a node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *tempHead;

	if (!node)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (!*head)
	{
		*head = node;
		return (node);
	}

	tempHead = *head;
	while (tempHead->next)
	{
		tempHead = tempHead->next;
	}

	tempHead->next = node;

	return (node);
}
