#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_most_numbers - multiplies two values
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0; j < 15; j++)
		{
			putchar(j + '0');
		}
	}
	putchar('\n');
}
