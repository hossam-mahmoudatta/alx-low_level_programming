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
	int i;

	for (i = 1 ; i < 101 ; i++)
	{
		if (i % 15 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
