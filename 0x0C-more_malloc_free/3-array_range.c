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
	int range;
	int *memAlloc;
	range = ((max + 1) - min);

	if (min > max)
		return (NULL);

	memAlloc = malloc(sizeof(int) * range);

	if (memAlloc == NULL)
		return (NULL);

	for (i = 0 ; i < range ; i++)
	{
		*(memAlloc + i) = min + i;
	}

	return (memAlloc);
}
