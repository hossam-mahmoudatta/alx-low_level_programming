#include "lists.h"

/**
 * sum_listint - that adds a new node at the end of a list
 *
 * @head: the struct that contains the data
 *
 * Return: Integer
 */

int sum_listint(listint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
