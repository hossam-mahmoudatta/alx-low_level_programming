#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: The tested variable.
 * @s2: The tested variable.
 * @n: The tested variable.
 *
 * Return: string
 */

char* string_nconcat(const char* s1, const char* s2, unsigned int n)
{	
	unsigned int i, j;
	int num;
	char *memAllocate;
	num = n;

	if (num >= _strlen(s2))
		num = _strlen(s2);

	unsigned int Length = _strlen(s1) + num + 1;

	memAllocate = malloc(sizeof(char) * Length);

	if (memAllocate == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		memAllocate[i] = s1[i];

	for (j = 0 ; j < n ; j++)
	{
		memAllocate[i + j] = s2[j];
		i++;
	}
	memAllocate[i] = '\0';

	return (memAllocate);
}
