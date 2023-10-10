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
	unsigned int j = 0;
	int *memAlloc;

	if (min > max)
		return (NULL);

	memAlloc = malloc(max - min + 1);

	if (memAlloc == NULL)
		return (NULL);

	for (i = min ; i <= max ; i++)
	{
		*(memAlloc + j) = i;
		j++;
	}

	return (memAlloc);
}
