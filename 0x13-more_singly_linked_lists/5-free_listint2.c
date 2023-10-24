#include "lists.h"

/**
 * free_listint2 - that adds a new node at the end of a list
 *
 * @head: the struct that contains the data
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head);
{
	listint_t *temp;

	temp = head;
	
	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = *(head)->next;
		free(*(head));
		*head = *temp;
	}
}
