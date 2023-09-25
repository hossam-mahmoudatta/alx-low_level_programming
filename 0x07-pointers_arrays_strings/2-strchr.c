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
    unsigned int k = 0;

	while (s[i] != c)
	{
		i++;
	}

	char* output = (char*)malloc (strlen(s) - i);

	while (s[i] != '\0')
	{
		output[k] = s[i];
		i++;
		k++;
	}

	return (output);
}
