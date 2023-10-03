#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _abs - prints the absolute of any value
 *
 * @n: letter being tested
 *
 * Return: 0 (otherwise)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
