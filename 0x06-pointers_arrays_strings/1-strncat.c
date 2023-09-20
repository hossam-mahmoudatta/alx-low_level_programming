#include "main.h"

/**
 * _strncat - a function that appends two strings
 *
 * @dest: the tested variable
 * @src: the tested variable
 * @n: the tested variable
 *
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	while (i < n && *src)
	{
		dest[length + i] = *src;
		i++;
		src++;
	}
	dest[length + 1] = '\0';

	return (dest);
}
