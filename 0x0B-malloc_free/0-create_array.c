#include "main.h"

/**
 * create_array - a function that creates an array of
 * chars, and initializes it with a specific char.
 *
 * @size: the tested variable
 * @c: the tested variable
 *
 * Return: string
 */

char *create_array(unsigned int size, char c)
{
	char *testString;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

    testString = malloc(sizeof(c) * size);

	if (testString == NULL)
	{
		return (NULL);
	}
    
	for ( i = 0 ; i < size ; i++)
	{
		testString[i] = c;
	}

	return (testString);
}
