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
	return (_strlen_recursion(s + 1));
}
