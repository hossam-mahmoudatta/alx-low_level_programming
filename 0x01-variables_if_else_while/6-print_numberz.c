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
	int number = 0;

	while (number < 10)
	{
		putchar('0' + number);
		number++;
	}

	putchar('\n');
	return (0);
}
