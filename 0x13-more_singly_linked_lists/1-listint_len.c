#include "lists.h"

/**
 * listint_len - prints all elements of a linked list
 *
 * @h: the struct that contains the data
 *
 * Return: no. of nodes printed
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int counter = 0;

	temp = h;

	while(temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
