#include "main.h"

/**
 * string_toupper - function to change lowercase to uppercase
 *
 * @c: the tested variable
 *
 * Return: void
 */

char *string_toupper(char * c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
		i++;
	}
	return (c);
}
