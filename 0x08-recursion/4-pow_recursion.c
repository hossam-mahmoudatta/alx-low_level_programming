#include "main.h"

/**
 * _pow_recursion - a function that returns x power of y
 *
 * @x: the tested variable
 * @y: the tested variable
 *
 * Return: Integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
