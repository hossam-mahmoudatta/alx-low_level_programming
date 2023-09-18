#include "main.h"

/**
 * _puts - a function that prints a string
 *
 * @str: the tested variable
 *
 * Return: None.
 */

void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		puts(str[length]);
		length++;
	}
	puts("\n");
}
