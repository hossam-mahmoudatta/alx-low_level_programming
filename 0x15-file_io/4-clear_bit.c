#include "main.h"

/**
 * clear_bit - prints all elements of a linked list
 *
 * @n: the struct that contains the data
 * @index: the struct that contains the data
 *
 * Return: no. of nodes printed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
