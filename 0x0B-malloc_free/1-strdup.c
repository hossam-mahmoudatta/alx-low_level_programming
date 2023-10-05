#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: the tested variable
 *
 * Return: string
 */

char *_strdup(char *str)
{
	char *duplicateString;
	unsigned int strLength,  i;

	if (str == 0)
	{
		return (NULL);
	}

	for (strLength = 0 ; str[strLength] ; strLength++)
	{

	}
	
	duplicateString = (char *)malloc(sizeof(char) * (strLength + 1));

	if (duplicateString == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i <= strLength ; i++)
	{
		duplicateString[i] = str[i];
	}

	return (duplicateString);
}
