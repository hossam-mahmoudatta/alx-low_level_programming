#include "lists.h"

/**
 * add_node_end - that adds a new node at the end of a list
 *
 * @head: the struct that contains the data
 * @str: string to be copied into the linked list
 *
 * Return: a node
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
