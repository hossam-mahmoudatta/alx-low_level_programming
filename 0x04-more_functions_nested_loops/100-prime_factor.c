#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - prints a square
 *
 * Return: 0
 */

int main(void)
{
	long int input = 612852475143;
	long int prime;

	for (prime = 2 ; prime < input ; prime++)
	{
		if (input % prime == 0)
		{
			input /= prime;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
