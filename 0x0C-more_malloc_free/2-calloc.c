#include "main.h"

/**
 * _calloc - allocates memory of an array using malloc.
 *
 * @nmemb: The tested variable.
 * @size: The tested variable.
 *
 * Return: Empty
 */

void *_calloc(unsigned int nmemb, unsigned int size)
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
