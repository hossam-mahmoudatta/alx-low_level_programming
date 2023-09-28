#include "main.h"

/**
 * _sqrt_recursion - func that returns natural square root of a num
 *
 * @n: the tested variable
 *
 * Return: Integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n / _sqrt_recursion(n - 1));
}
