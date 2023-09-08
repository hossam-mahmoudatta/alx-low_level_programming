#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - app start
 *
 * Return: 0 (Successfully executed)
 */
int main(void)
{
	char letter = 'a';
	char Letter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (letter <= 'Z')
	{
		putchar(Letter);
		Letter++;
	}

	putchar('\n');
	return (0);
}
