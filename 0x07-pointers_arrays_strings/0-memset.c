#include "main.h"

/**
 * _strncpy - a function that appends two strings
 *
 * @s: the tested variable
 * @b: the tested variable
 * @n: the tested variable
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

    for (i = 0 ; i < n ; i++)
    {
        s[i] = b;
    }

    return (s);
}
