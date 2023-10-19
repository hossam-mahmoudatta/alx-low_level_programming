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
	if (h->str == NULL)
		printf("(nil)");

	while (h != NULL)
	{
		printf("%d -> ", h->len);
		h = h->next;
	}
	printf("NULL\n");
}
