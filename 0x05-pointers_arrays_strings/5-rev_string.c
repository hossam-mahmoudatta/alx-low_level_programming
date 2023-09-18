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
    char *temp;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1 ; i >= 0 ; i--)
	{
		temp[i] = s[i]; 
	}
	printf("\n");
}
