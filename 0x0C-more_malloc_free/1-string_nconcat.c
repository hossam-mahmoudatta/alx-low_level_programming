#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: The tested variable
 * @s2: The tested variable
 * @n: The tested variable
 *
 * Return: Nothing
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{	
	unsigned int i = 0, j = 0;

	if (n >= strlen(s2);)
		n = strlen(s2);

	int Length = strlen(s1) + n + 1;

	char *memAllocate = malloc(sizeof(char) * Length);

	if (memAllocate == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

    while (s1[i] != '\0')
	{
        memAllocate[i] = s1[i];
        i++;
    }

	while (j < n)
	{
		memAllocate[i + j] = s2[j];
		j++;
    }
	
	memAllocate[Length] = '\0';

	return (memAllocate);
}
