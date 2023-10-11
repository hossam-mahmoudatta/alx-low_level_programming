#include "main.h"

/**
 * print_name - preints the name of the file
 * 
 * @name The tested variable.
 * @f: The tested variable.
 *
 * Return: Vouid
 */

void print_name(const char *name, void (*f)(const char *))
{
	if (f != NULL)
	
	f(name);
}
