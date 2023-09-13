#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_to_98 - prints the 9 times table
 *
 * @n: 1st parameter
 *
 * Return: result
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n ; i > 97 ; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else if (i == 98)
			{
				printf("%d\n", i);
			}
		}
	}
	else if (n == 98)
	{
			printf("%d\n", n);
	}
	else if (n < 98)
	{
		for (i = n ; i < 99 ; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else if (i == 98)
			{
				printf("%d\n", i);
			}
		}
	}
}
