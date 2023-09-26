#include "main.h"

/**
 * _strstr - a function that gets the length of a prefix substring.
 *
 * @haystack: the tested variable
 * @needle: the tested variable
 *
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	char *outputValue = haystack;
	char *maskNeedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (outputValue);
		}
		needle = maskNeedle;
		outputValue++;
		haystack = outputValue;
	}
	return (0);
}
