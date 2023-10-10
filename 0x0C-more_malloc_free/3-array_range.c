#include "main.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: The tested variable.
 * @max: The tested variable.
 *
 * Return: Empty
 */

int *array_range(int min, int max)
{
	unsigned int i;
	char *memAllocate;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memAllocate = malloc(nmemb * size);

	if (memAllocate == NULL)
		return (NULL);

	for (i = 0 ; i < (nmemb * size) ; i++)
		*((char *)(memAllocate) + i) = 0;


	return (memAllocate);
}
