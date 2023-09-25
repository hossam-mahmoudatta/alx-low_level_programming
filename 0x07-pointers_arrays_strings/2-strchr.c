#include "main.h"

/**
 * _strchr - a function that locates a char in a string
 *
 * @s: the tested variable
 * @c: the tested variable
 *
 * Return: string
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int k = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
