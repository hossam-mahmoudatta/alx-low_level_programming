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
	char letter = 'z';

	while (letter > 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');
	return (0);
}
