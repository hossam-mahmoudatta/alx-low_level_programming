#include "main.h"

/**
 * swap_int - a function that swaps two vars
 *
 * @a: the tested variable
 * @b: the tested variable
 *
 * Return: None.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
