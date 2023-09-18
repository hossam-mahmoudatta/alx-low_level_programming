#include "main.h"

/**
 * puts_half - a function that prints a string
 *
 * @str: the tested variable
 *
 * Return: None.
 */

void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0 ; i < length / 2 ; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
