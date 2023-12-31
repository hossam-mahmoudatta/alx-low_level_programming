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
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		n++;
	}

	return (n);
}
