#include "main.h"

/**
 * _calloc - a function that concatenates two strings
 *
 * @nmemb: The tested variable.
 * @size: The tested variable.
 *
 * Return: Empty
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{	
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	char *memAllocate = malloc(nmemb * size);

	if (memAllocate == NULL)
		return (NULL);

	for (i = 0 ; i < (nmemb * size) ; i++)
		*((char *)(memAllocate) + i) = 0;

	return (memAllocate);
}
