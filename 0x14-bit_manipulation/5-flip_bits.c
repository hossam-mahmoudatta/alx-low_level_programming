#include "main.h"

/**
 * flip_bits - prints all elements of a linked list
 *
 * @n: the struct that contains the data
 * @m: the struct that contains the data
 *
 * Return: no. of nodes printed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, FlipsNumber = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0 ; i < j ; i++)
	{
		if ((m & 1) != (n & 1))
			FlipsNumber += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (FlipsNumber);
}
