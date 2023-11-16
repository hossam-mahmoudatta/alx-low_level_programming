#include "main.h"

/**
 * get_bit - prints all elements of a linked list
 *
 * @n: the struct that contains the data
 * @index: the struct that contains the data
 *
 * Return: no. of nodes printed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
