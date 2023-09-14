#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * more_numbers - prints number multiple times
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
			putchar('0' + j);
		}
	putchar('\n');
	}
}
