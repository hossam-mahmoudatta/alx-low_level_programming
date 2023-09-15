#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_triangle - prints number multiple times
 *
 * @size: letter being tested
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = i ; j < size ; j++)
			{
				putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
