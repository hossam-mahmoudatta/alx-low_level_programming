#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_number - prints number multiple times
 *
 * @n: letter being tested
 *
 * Return: Nothing
 */

void print_number(int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (k = n - i ; k >= 1 ; k--)
			{
				putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
