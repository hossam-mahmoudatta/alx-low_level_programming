#include "main.h"

/**
 * print_diagsums - a function that prints the chess board
 *
 * @a: the tested variable
 * @size: the tested variable
 *
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int row = 0;
	int col = 0;
	int sum = 0;

	for (row = 0 ; row < size ; row++)
	{
		sum += a[row][col];
		col++;
	}
}
