#include "lists.h"

/**
 * list_len - function that returns the no of elements in a linked list.
 *
 * @h: the struct that contains the data
 *
 * Return: no. of nodes printed
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (!h)
		return (0);

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d]\n", h->len);
		}

		h = h->next;
		n++;
	}

	return (n);
}
