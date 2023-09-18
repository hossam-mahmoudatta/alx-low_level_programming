#include "main.h"

/**
 * puts2 - a function that prints a string
 *
 * @str: the tested variable
 *
 * Return: None.
 */

void puts2(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0 ; i < length ; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
