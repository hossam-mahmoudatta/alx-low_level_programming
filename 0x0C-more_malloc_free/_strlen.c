#include "main.h"

/**
 * _strlen - calculate and return string length
 *
 * @string: string
 *
 * Return: string length
 */


int _strlen(char *string)
{
	int i;

	for (i = 0 ; string[i] != '\0' ; i++)
		;

	return (i);
}
