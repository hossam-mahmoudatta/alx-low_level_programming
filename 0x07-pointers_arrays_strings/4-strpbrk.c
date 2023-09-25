#include "main.h"

/**
 * _strpbrk - a function that gets the length of a prefix substring.
 *
 * @s: the tested variable
 * @accept: the tested variable
 *
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	int counter = 0;
	int i = 0;
	int k = 0;
	int flag = 0;

	while (s[i] != '\0')
	{
		while (accept[k] != '\0')
		{
			flag = 0;

			if (s[i] == accept[k])
			{
				counter++;
				flag = 1;
				break;
			}
			k++;
		}

		if (flag == 0)
		{
			return (counter);
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
	return (s);
}
