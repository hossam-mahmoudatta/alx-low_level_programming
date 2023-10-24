#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 *
 * @h: the struct that contains the data
 *
 * Return: no. of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int counter = 0;

	temp = h;
	while(temp)
	{
		printf("%d\n", temp->n);
		counter++;
		temp = temp->next;
	}
	return (counter);
}
