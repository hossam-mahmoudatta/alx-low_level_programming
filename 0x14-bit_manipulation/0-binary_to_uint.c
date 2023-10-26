#include "main.h"

/**
 * binary_to_uint - prints all elements of a linked list
 *
 * @b: the struct that contains the data
 *
 * Return: no. of nodes printed
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimalValue = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimalValue = 2 * decimalValue + (b[i] - '0');
	}
	return (decimalValue);
}
