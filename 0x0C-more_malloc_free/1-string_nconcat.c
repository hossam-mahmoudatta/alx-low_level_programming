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
	size_t str1Len = strlen(s1);
	size_t str2Len = strlen(s2);

	if (n >= str2Len)
		n = str2Len;

	size_t Length = str1Len + n;

	char *memAllocate = malloc(sizeof(char) * (Length + 1));

	if (memAllocate == NULL)
		return NULL;

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
