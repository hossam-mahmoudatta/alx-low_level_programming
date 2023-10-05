#include "main.h"

/**
 * str_concat - The returned pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 *
 * @s1: the tested variable
 * @s2: the tested variable
 *
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	char *concatString;
	unsigned int s1Length, s2Length, i, j;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	for (s1Length = 0 ; s1[s1Length] ; s1Length++)
	{

	}

	for (s2Length = 0 ; s2[s2Length] ; s2Length++)
	{

	}

	concatString = malloc(sizeof(char) * (s1Length + s2Length + 1));

	if (concatString == NULL)
	{
		free(concatString);
		return (NULL);
	}

	for (i = 0 ; i <= s1Length ; i++)
	{
		concatString[i] = s1[i];
	}

	for (j = 0 ; j <= s2Length ; j++, i++)
	{
		concatString[i] += s2[j];
	}

	return (concatString);
}
