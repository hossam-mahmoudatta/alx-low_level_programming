#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_number - prints number multiple times
 *
 * @n: letter being tested
 *
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int num1 = 0;

	if  (n < 0)
	{
		num1 = -n;
		_putchar('-');
	}

	else
	{
		num1 = n;
	}

	if (num1 / 10)
	{
		print_number(num1 / 10);
	}

	_putchar((num1 % 10) + '0');
}
