#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - app start
 *
 * Return: 0 (Successfully executed)
 */
int main(void)
{
	char letter[] = "_putchar";
	int i = 0;

	while (letter[i] < '\0')
	{
		putchar(letter[i]);
		i++;
	}
	putchar('\n');
	return (0);
}