#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: the tested variable
 * @accept: the tested variable
 *
 * Return: string
 */

unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				counter++;
			}
			accept++;
		}
		s++;

		/**
		 * when i loop on ' *s ', when i s++
		 * then i point at the next location
		 * therefore i'm reducing the string
		 * in a very smart way
		 */
	}
	return (counter);
}
