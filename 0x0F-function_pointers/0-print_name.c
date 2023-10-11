#include "main.h"

/**
 * print_name - preints the name of the file
 * 
 * @name The tested variable.
 * @f: The tested variable.
 *
 * Return: Vouid
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	
	f(name);
}
