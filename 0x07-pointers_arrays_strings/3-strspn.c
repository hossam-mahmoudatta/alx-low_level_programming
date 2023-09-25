#include "main.h"

/**
 * _strchr - a function that locates a char in a string
 *
 * @s: the tested variable
 * @c: the tested variable
 *
 * Return: string
 */

unsigned int _strspn(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;

		/**
		 * when i loop on ' *s ', when i s++
		 * then i point at the next location
		 * therefore i'm reducing the string
		 * in a very smart way
		 */
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
