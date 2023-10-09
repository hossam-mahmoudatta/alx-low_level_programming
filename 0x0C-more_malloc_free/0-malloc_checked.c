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
	int *memAllocate;
	memAllocate = malloc(sizeof(int) * b);

	if (memAllocate == NULL)
	{
		printf("Status '98'\n");
		return (1);
	}

	return (0);
}
