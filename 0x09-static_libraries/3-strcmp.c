#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: the tested variable
 * @s2: the tested variable
 *
 * Return: string
 */

int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while ((*s1 == *s2) && (*s1 != '\0'))
	{
		s1++;
		s2++;
	}

	if (s1 != s2)
	{
		result = *s1 - *s2;
	}

	return (result);
}
