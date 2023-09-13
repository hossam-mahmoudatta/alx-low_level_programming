#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - prints the alphabet from a to z 10 times
 *
 * Return: 0 (Successfully executed)
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
		letter = 'a';
		i++;
	}
}
