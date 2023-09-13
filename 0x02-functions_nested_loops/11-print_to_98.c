#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_to_98 - prints the 9 times table
 *
 * @n: 1st parameter
 *
 * Return: result
 */

void print_to_98(int n)
{
	int i;

	for (i = n ; i < 99 ; i++)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
	}
}
