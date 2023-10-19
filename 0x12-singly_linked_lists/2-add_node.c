#include "lists.h"

/**
 * add_node - that adds a new node at the beginning of a list
 *
 * @head: the struct that contains the data
 * @str: string to be copied into the linked list
 *
 * Return: a node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

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
	node->next = *head;
	*head = node;

	return (node);
}
