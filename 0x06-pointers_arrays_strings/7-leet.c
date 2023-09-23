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


	char text[] = "oOlLeEaAtT";
	char nums[] = "0011334477";

	while (s[i] != '\0')
	{
		int j = 0;
		int k = 0;
		
		while (text[j] != '\0')
		{
			if (s[i] == text[j])
			{
				k = j;
				s[i] = nums[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
