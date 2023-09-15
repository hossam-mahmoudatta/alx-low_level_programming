#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_diagonal - prints a line
 *
 * @n: letter being tested
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;
    int space;

	for (i = 0 ; i < n ; i++)
	{
		for (space = 0 ; space < i ; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
