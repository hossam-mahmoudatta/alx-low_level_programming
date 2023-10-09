#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: The tested variable
 *
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *memAllocate = malloc(b);

	if (memAllocate == NULL)
		exit (98);

	return(memAllocate);
}
