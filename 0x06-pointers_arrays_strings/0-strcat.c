#include "main.h"

/**
 * _strcat - a function that appends two strings
 *
 * @dest: the tested variable
 * @src: the tested variable
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0 ; i <= length ; i++)
	{
		dest[i] += src[i];
	}
	return (dest);
}
