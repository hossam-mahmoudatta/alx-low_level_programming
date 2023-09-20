#include "main.h"

/**
 * reverse_array - a function that compares two strings
 *
 * @a: the tested variable
 * @n: the tested variable
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int result = 0;

	int i = 0;
	int b = 0;

	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}

	return (result);
}
