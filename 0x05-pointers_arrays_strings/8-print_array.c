#include "main.h"

/**
 * print_array - a function that prints a string
 *
 * @a: the tested variable
 * @n: the tested variable
 *
 * Return: None.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i != n)
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
