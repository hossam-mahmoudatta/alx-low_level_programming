#include "main.h"

/**
 * infinite_add - function to add two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: address of r or 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	char text[] = "oOlLeEaAtT";
	char nums[] = "0011334477";

	while (n1[i] != '\0')
	{
		int j = 0;
		int k = 0;

		while (text[j] != '\0')
		{
			if (n1[i] == text[j])
			{
				k = j;
				n1[i] = nums[k];
			}
			j++;
		}
		i++;
	}
	return (n1);
}
