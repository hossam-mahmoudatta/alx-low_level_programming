#include "main.h"

/**
 * rev_string - a function that prints a string
 *
 * @s: the tested variable
 *
 * Return: None.
 */

void rev_string(char *s)
{
	int length = 0;
	char temp;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0 ; i < length / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
	printf("\n");
}
