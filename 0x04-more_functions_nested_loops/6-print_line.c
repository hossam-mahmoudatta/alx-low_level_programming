#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_line - prints a line
 *
 * @n: letter being tested
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
