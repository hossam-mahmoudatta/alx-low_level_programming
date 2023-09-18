#include "main.h"

/**
 * _strlen - a function that prints string length
 *
 * @s: the tested variable
 *
 * Return: None.
 */

int _strlen(char *s)
{
	int length = 0;

	while(s[length] != '\0')
	{
		length++;
	}

	return (length);
}
