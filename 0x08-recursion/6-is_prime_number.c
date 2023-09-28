#include "main.h"

/**
 * is_prime_number - func that returns 1 if i/p is prime
 *
 * @n: the tested variable
 *
 * Return: Integer
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n / is_prime_number(n - 1));
}
