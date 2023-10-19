#include "lists.h"

/**
 * charFormater - formats character
 *
 * @separator: Test var
 * @argPointer: Test var
 *
 * Return: void
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");

	else
	{
		printf("[%u] %s\n ", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
