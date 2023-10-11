#include "function_pointers.h"

/**
 * print_name - prints the name of the file
 *
 * @name: The tested variable.
 * @f: The tested variable.
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
