#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * jack_bauer - prints every min of jack
 *
 * Return: 0 (otherwise)
 */

 void jack_bauer(void)
{
	int i, j;

	for(i = 0 ; i < 24 ; i++)
	{
		_putchar(i + '0');
		_putchar(':');
		for(j = 0 ; j < 60 ; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
