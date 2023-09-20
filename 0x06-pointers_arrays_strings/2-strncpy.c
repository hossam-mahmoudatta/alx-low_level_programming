#include "main.h"

/**
 * _strncpy - a function that appends two strings
 *
 * @dest: the tested variable
 * @src: the tested variable
 * @n: the tested variable
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length = 0;
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
