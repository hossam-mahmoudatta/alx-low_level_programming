#include "main.h"

/**
 * _strlen_recursion - a function that prints the length of the string
 *
 * @s: the tested variable
 *
 * Return: Integer
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}

	return (1 + _strlen_recursion(++s));
}
