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
	char *temp = malloc(length + 1);
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	char *temp = malloc(length + 1);
	int j = 0;

	for (i = length - 1 ; i >= 0 ; i--)
	{
		temp[j] = s[i];
		j++;
	}
	for (i = 0 ; i < length ; i++)
	{
		s[i] = temp[i];
	}
	printf("\n");
}
