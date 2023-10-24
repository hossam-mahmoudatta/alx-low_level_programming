#include "lists.h"

/**
 * free_listint - that adds a new node at the end of a list
 *
 * @head: the struct that contains the data
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *tempTwo;

	temp = head;
	
	while (temp != NULL)
	{
		tempTwo = temp->next;
		free(temp);
		temp = tempTwo;
	}
}
