#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_numbers - multiplies two values
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	char num = 0;
	int i = 0;

	while (i < 10)
	{
		_putchar(num + '0');
		num++;
		i++;
	}
	_putchar('\n');
}
