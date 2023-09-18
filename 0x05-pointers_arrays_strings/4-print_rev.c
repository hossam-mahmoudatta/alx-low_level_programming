#include "main.h"

/**
 * print_rev - a function that prints a string
 *
 * @s: the tested variable
 *
 * Return: None.
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1 ; i >= 0 ; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
