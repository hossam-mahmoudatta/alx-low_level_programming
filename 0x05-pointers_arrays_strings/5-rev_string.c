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
    char *temp = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1 ; i >= 0 ; i--)
	{
		temp[i] = s[i]; 
	}
	for (i = 0 ; i < length - 1 ; i++)
	{
		s[i] = temp[i]; 
	}
	printf("\n");
}
