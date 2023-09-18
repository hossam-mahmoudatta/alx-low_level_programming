#include "main.h"

/**
 * _strcpy - a function that prints a string
 *
 * @dest: the tested variable
 * @src: the tested variable
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0 ; i < length ; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
