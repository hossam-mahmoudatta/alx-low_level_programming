#include "main.h"

/**
 * _memcpy - a function that copies a memory area
 *
 * @dest: the tested variable
 * @src: the tested variable
 * @n: the tested variable
 *
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
