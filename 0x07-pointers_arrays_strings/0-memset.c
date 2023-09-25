#include "main.h"

/**
 * _strncpy - a function that appends two strings
 *
 * @s: the tested variable
 * @b: the tested variable
 * @n: the tested variable
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
