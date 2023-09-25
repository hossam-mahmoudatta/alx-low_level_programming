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
	int i = 0;
	int k = 0;

	while (s[i] != '\0')
	{
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
			{
				counter++;
			}
			k++;
		}
		k = 0;
		i++;

		/**
		 * when i loop on ' *s ', when i s++
		 * then i point at the next location
		 * therefore i'm reducing the string
		 * in a very smart way
		 */
	}
	return (counter);
}
