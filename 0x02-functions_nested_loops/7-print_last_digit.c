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

	if (n < 0)
	{
		n = -n;
	}
	digit = n % 10;
	_putchar(digit + '0');

	return (digit);
}
