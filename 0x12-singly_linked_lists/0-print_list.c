#include "lists.h"

/**
 * print_list - prints all elements of a linked lists
 *
 * @h: the struct that contains the data
 *
 * Return: no. of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		h = h->next;
		n++;
	}

	return (n);
}
