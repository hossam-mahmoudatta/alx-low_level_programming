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
	int i = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	while (src[i] != '\0')
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';
	
	return (dest);
}
