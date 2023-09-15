#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_square - prints a square
 *
 * @size: letter being tested
 *
 * Return: void
 */

void print_square(int size)
{
	int i = 0;
	int col;

	for (i = 0 ; i < size ; i++)
	{
		for (col = 0 ; col < size ; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
