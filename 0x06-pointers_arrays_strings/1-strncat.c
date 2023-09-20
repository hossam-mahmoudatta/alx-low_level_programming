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

	while (src[i] != n)
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';

	return (dest);
}
