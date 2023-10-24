#include "lists.h"

/**
 * free_listint2 - that adds a new node at the end of a list
 *
 * @head: the struct that contains the data
 *
 * Return: Nothing
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	int Data;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	Data = temp->n;
	free(temp);
	return (Data);
}
