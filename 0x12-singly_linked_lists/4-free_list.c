#include "lists.h"

/**
 * free_list - that adds a new node at the end of a list
 *
 * @head: the struct that contains the data
 *
 * Return: Nothing
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
