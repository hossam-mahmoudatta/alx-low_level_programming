#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_last_digit - prints the last digit of any value
 *
 * @n: letter being tested
 *
 * Return: 0 (otherwise)
 */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit = -1 * digit;
	}
	_putchar (digit + '0');

	return (digit);
}
