#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the diagonals
 *
 * @a: the tested variable
 * @size: the tested variable
 *
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		diag1 += a[i * size + i];
		diag2 += a[i * size + (size - 1 - i)];
		
		/**
		 * The code is abt transforming
		 * 2d array into a 1d array
		 */
	}
	printf("%d, ", diag1);
	printf("%d\n", diag2);
}
