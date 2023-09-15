#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_line - prints a line
 *
 * @n: letter being tested
 * 
 * Return: Nothing
 */

void print_line(int n)
{
	int i = 0;

	for (i = 0 ; i < n ; i++)
	{
		if (n < 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
