#include "lists.h"

/**
 * add_node_end - that adds a new node at the end of a list
 *
 * @head: the struct that contains the data
 * @str: string to be copied into the linked list
 *
 * Return: a node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *tempHead;

	if (!node)
	{
		return (NULL);
	}

	node->str = strdup(str);

	if (!node->str)
	{
		free(node);
		return (NULL);
	}

	node->len = strlen(str);
	tempHead = *head;

	if (!*head)
	{
		*head = node;
		return (node);
	}

	while (tempHead->next)
		tempHead = tempHead->next;

	tempHead->next = node;

	return (node);
}
