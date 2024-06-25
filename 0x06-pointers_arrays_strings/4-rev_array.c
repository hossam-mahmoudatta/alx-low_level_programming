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
	int i = 0;
	int temp = 0;

	while (i < n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
