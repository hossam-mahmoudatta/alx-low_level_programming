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
    if (*needle == '\0')
	{
        return (char *)haystack;
    }

    while (*haystack)
	{
        const char *start = haystack;

        /**
         * Try to match the needle with the haystack
         */
        while (*haystack && *needle && *haystack == *needle)
		{
            haystack++;
            needle++;
        }

		/**
		 * If the needle is fully matched, return the starting position
		 */
        if (*needle == '\0')
		{
            return (char *)start;
        }

		/**
		 * Otherwise, reset the haystack to the next character
		 */
        haystack = start + 1;
        needle = start + 1;
    }

    /**
     * If the needle is not found in the haystack, return NULL
     */
	return (NULL);
}
