#include "main.h"

/**
 * factorial - a function that prints the length of the string
 *
 * @n: the tested variable
 *
 * Return: Integer
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
