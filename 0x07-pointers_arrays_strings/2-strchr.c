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
	unsigned int i = 0;
	char *output;

	while (s[i] != c)
	{
		i++;
	}

	while (s[i] != '\0')
	{
		output[i] = s[i];
		i++;
	}

	return (output);
}
