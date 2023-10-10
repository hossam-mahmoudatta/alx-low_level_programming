#include "main.h"

/**
 * _realloc - creates an array of integers.
 *
 * @ptr: The tested variable.
 * @old_size: The tested variable.
 * @new_size: The tested variable.
 *
 * Return: Empty
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *memAlloc;

	if (new_size == old_size)
		return (ptr);

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (ptr);
	}

	if (ptr == NULL)
	{
		memAlloc = malloc(new_size);

		if (memAlloc == NULL)
			return (NULL);
	}

	if ((new_size > old_size) && (ptr != NULL))
	{
		memAlloc = malloc(new_size);

		if (memAlloc == NULL)
			return (memAlloc);

		for (i = 0; i < old_size; i++)
			memAlloc[i] = *((char *)ptr + 1);

		free(ptr);
	}

	return (memAlloc);
}
