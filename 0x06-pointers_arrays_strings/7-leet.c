#include "main.h"

/**
 * leet - function to change lowercase to uppercase
 *
 * @s: the tested variable
 *
 * Return: char
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	while (s[i] != '\0')
	{
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
			{
				k = j;
				s[i] = e[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
