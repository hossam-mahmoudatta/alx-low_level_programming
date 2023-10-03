#include "main.h"

/**
 * _memset - a function that assigns a value to specified memory
 *
 * @s: the tested variable
 * @b: the tested variable
 * @n: the tested variable
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
